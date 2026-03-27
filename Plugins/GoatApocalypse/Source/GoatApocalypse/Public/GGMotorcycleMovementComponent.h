#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "GGTrickRotationParams.h"
#include "GGTrickRotationState.h"
#include "SimpleWheeledVehicleMovementComponent.h"
#include "GGOnMotorcycleTrickCompletedDelegate.h"
#include "GGMotorcycleMovementComponent.generated.h"

class AGGVehicle_Motorcycle;
class UGGMotorcycleConfig;
class UGGMotorcycleStabilizationConfig;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATAPOCALYPSE_API UGGMotorcycleMovementComponent : public USimpleWheeledVehicleMovementComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGMotorcycleStabilizationConfig* StabilizationConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGMotorcycleStabilizationConfig* AirStabilizationConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGMotorcycleConfig* MotorcycleConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGTrickRotationParams TrickRotationParams;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SteeringAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EngineDriveTorque;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGOnMotorcycleTrickCompleted OnTrickCompleted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGVehicle_Motorcycle* OwningVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* VehicleMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGGTrickRotationState TrickRotationState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VehicleScale, meta=(AllowPrivateAccess=true))
    FVector VehicleScale;
    
public:
    UGGMotorcycleMovementComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStopDoingTricks();
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerStartDoingTricks();
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerOnTrickCompleted(int32 TrickIndex);
    
    UFUNCTION(Server, Unreliable)
    void ServerMove(FVector_NetQuantize100 Location, FRotator Rotation, FVector_NetQuantize100 ClientVelocity, FVector_NetQuantize100 ClientAngularVelocity, uint8 InDriveTorque, int8 InSteeringAngle);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_VehicleScale();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastOnTrickCompleted(int32 TrickIndex);
    
};

