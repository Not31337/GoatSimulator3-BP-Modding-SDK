#pragma once
#include "CoreMinimal.h"
#include "OnGoatEmoteStartedDelegate.generated.h"

class AGGGoat;
class UGGGoatEmote;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGoatEmoteStarted, AGGGoat*, EmotingGoat, UGGGoatEmote*, Emote);

