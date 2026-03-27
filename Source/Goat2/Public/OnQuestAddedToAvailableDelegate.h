#pragma once
#include "CoreMinimal.h"
#include "OnQuestAddedToAvailableDelegate.generated.h"

class AGGQuestBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnQuestAddedToAvailable, AGGQuestBase*, Quest, const FString&, ID);

