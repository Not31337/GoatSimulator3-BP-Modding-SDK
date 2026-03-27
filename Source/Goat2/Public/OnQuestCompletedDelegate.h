#pragma once
#include "CoreMinimal.h"
#include "OnQuestCompletedDelegate.generated.h"

class AGGPlayerState;
class AGGQuestBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnQuestCompleted, AGGQuestBase*, Quest, AGGPlayerState*, OptionalPlayerState);

