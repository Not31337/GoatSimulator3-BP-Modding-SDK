#pragma once
#include "CoreMinimal.h"
#include "OnGoatEmoteEndedDelegate.generated.h"

class AGGGoat;
class UGGGoatEmote;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnGoatEmoteEnded, AGGGoat*, EmotingGoat, UGGGoatEmote*, Emote, bool, Interrupted);

