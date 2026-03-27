#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "GameplayTagContainer.h"
#include "EAttachmentHandSlot.h"
#include "BTDecorator_GGHasActorInHand.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTDecorator_GGHasActorInHand : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttachmentHandSlot HandToCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PActorWithTheseTags;
    
public:
    UBTDecorator_GGHasActorInHand();

};

