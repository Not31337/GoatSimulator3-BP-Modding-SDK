#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnVoiceLineFinishedDelegate.generated.h"

class AGGNPC;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnVoiceLineFinished, AGGNPC*, NPC, FGameplayTag, VOTag, bool, bCouldPlayVO);

