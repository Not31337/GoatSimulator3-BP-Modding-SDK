#pragma once
#include "CoreMinimal.h"
#include "EMoods.h"
#include "OnMoodChangedDelegate.generated.h"

class AGGNPC;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMoodChanged, AGGNPC*, NPC, EMoods, NewMood);

