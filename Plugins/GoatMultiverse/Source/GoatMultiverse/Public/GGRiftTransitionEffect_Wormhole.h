#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GGRiftTransitionEffect.h"
#include "GGRiftTransitionEffect_Wormhole.generated.h"

class AGGPlayerState;
class UGGTeleportAreaDataAsset;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGRiftTransitionEffect_Wormhole : public AGGRiftTransitionEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableSplitscreen;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle FadeOutTH;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle FadeInTH;
    
public:
    AGGRiftTransitionEffect_Wormhole(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TeleportOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ScreenFadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ScreenFadeIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostInitalFadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostFinalFadeOut();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLeftTeleportArea(AGGPlayerState* Player, UGGTeleportAreaDataAsset* AreaAsset);
    
    UFUNCTION(BlueprintCallable)
    void OnEnteredTeleportArea(AGGPlayerState* Player, UGGTeleportAreaDataAsset* AreaAsset);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSplitscreenPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndTransition();
    
};

