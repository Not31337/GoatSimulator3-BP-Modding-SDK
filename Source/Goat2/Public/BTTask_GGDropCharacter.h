#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameplayTagContainer.h"
#include "BTTask_GGDropCharacter.generated.h"

class AGGCharacter;
class AGGNPC_Humanoid;
class UAnimMontage;
class UBehaviorTreeComponent;
class UGGAnimNotify;

UCLASS(Blueprintable)
class GOAT2_API UBTTask_GGDropCharacter : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DropMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AnimationNotifyTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bThrowCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpulsePower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPutDroppedCharacterInBBValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ValueToSet;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* OwnerBT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC_Humanoid* NPC;
    
public:
    UBTTask_GGDropCharacter();

    UFUNCTION(BlueprintCallable)
    void OnGGAnimNotifyTrigger(AGGCharacter* NotifyingNPC, const UGGAnimNotify* AnimNotify, FGameplayTag NotifyTag);
    
};

