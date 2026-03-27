#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GGOnPlayerTalkingStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGGOnPlayerTalkingStateChanged, const FUniqueNetIdRepl&, TalkerId, bool, bIsTalking);

