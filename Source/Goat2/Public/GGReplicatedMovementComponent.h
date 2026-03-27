#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PawnMovementComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "ReplicatedMovementState.h"
#include "GGReplicatedMovementComponent.generated.h"

class AGGPlayerController;
class APawn;
class APlayerCameraManager;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGReplicatedMovementComponent : public UPawnMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBeClientAuthoritative;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bServerHasControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FReplicatedMovementState ReplicatedMovementState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize10 InputDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HandbrakeInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* OwnerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* OwnerPrimRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerController* OwnerPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCameraManager* CurrentCameraManager;
    
public:
    UGGReplicatedMovementComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(Server, Unreliable)
    void ServerUpdateState(FReplicatedMovementState NewMovementState, FRepMovement ReplicatedMovement);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerClearInput();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClientAuthoritative() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetThrottleInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSteeringInput() const;
    
protected:
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientApplyImpulse(FVector_NetQuantize LinearImpulse, FVector_NetQuantize AngularImpulse);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyImpulse(FVector_NetQuantize LinearImpulse, FVector_NetQuantize AngularImpulse);
    
};

