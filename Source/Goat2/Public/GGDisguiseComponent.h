#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GGDisguiseDelegateDelegate.h"
#include "GGDisguiseState.h"
#include "RagdollStateChangeSettings.h"
#include "GGDisguiseComponent.generated.h"

class ACharacter;
class ULSCharacterMovementComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Within=GGCharacter, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGDisguiseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DisguiseActor, meta=(AllowPrivateAccess=true))
    FGGDisguiseState DisguiseState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGDisguiseDelegate OnDisguiseRemoved;
    
    UGGDisguiseComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRevertDisguise();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_DisguiseActor();
    
    UFUNCTION(BlueprintCallable)
    void OnNPCRagdoll(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
    UFUNCTION(BlueprintCallable)
    void AbilityDown();
    
};

