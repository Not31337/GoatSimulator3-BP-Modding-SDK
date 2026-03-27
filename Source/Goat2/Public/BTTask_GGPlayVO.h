#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "GameplayTagContainer.h"
#include "BTTask_GGPlayVO.generated.h"

class AGGNPC;
class UBehaviorTreeComponent;

UCLASS(Blueprintable)
class GOAT2_API UBTTask_GGPlayVO : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VoiceOverType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlocking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanInterruptCurrentLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeStoppedByDamage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* NodeOwnerComp;
    
public:
    UBTTask_GGPlayVO();

    UFUNCTION(BlueprintCallable)
    void OnVoiceLineFinished(AGGNPC* NPC, FGameplayTag VOTag, bool bCouldPlayVO);
    
};

