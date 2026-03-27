#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "RagdollStateChangeSettings.h"
#include "GGSnowmanHead.generated.h"

class ACharacter;
class AGGNPC;
class ULSCharacterMovementComponent;
class USkeletalMesh;

UCLASS(Abstract, Blueprintable)
class GOAT2_API AGGSnowmanHead : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NPCForcedRagdollDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NPCFreezeDurationSourceTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<USkeletalMesh>, float> ScalesForSpecificMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsAttachedActorFrozen, meta=(AllowPrivateAccess=true))
    bool bIsAttachedActorFrozen;
    
public:
    AGGSnowmanHead(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsAttachedActorFrozen();
    
    UFUNCTION(BlueprintCallable)
    void OnAttachedNPCUnRagdolled(bool bRagdollOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* UnRagdolledCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
    UFUNCTION(BlueprintCallable)
    void OnAttachedNPCPooled(AGGNPC* NPC, bool WasPooled);
    
};

