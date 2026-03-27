#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnQuestDataUpdateDelegate.generated.h"

class AGGQuestBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnQuestDataUpdate, AGGQuestBase*, Quest, FGameplayTag, UpdateTag);

