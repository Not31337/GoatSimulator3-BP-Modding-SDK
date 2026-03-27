#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnPlayerFinishedSequenceDelegate.generated.h"

class AGGPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerFinishedSequence, AGGPlayerController*, PC, FGameplayTag, SequenceTag);

