#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GGOnMediaWatchdogForcedEndDelegate.h"
#include "GGWatchMediaPlaybackAction.generated.h"

class UGGWatchMediaPlaybackAction;
class UMediaPlayer;
class UObject;

UCLASS(Blueprintable)
class GOAT2_API UGGWatchMediaPlaybackAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGOnMediaWatchdogForcedEnd OnForcedEnd;
    
    UGGWatchMediaPlaybackAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGGWatchMediaPlaybackAction* WatchMediaPlayback(UObject* WorldContextObject, UMediaPlayer* MediaPlayer, bool bSkipOnSteamDeck, float StartTimeout, float StallTimeout, float EndGracePeriod, float MaxPlaybackTime);
    
};

