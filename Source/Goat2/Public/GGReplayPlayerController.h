#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GGReplayKeyframe.h"
#include "GGReplayPlayerController.generated.h"

class ACameraActor;
class UGGReplayHUDWidget;
class UUserWidget;

UCLASS(Blueprintable)
class GOAT2_API AGGReplayPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> ReplayHUDWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGReplayHUDWidget* ReplayHUDWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGReplayKeyframe> KeyFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActor* KeyframeCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KeyframeTimeTolerance;
    
    AGGReplayPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToggleReplayUI();
    
    UFUNCTION(BlueprintCallable)
    void TogglePlayState();
    
    UFUNCTION(BlueprintCallable)
    void ToggleGoatCamera();
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentReplayTimeToSeconds(float Seconds);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentReplayPlayRate(float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCurrentReplayPausedState(bool bDoPause);
    
    UFUNCTION(BlueprintCallable)
    void RemoveKeyframe();
    
    UFUNCTION(BlueprintCallable)
    void GoToPreviousKeyframe();
    
    UFUNCTION(BlueprintCallable)
    void GoToNextKeyframe();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentReplayTotalTimeInSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentReplayPausedState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentReplayCurrentTimeInSeconds() const;
    
    UFUNCTION(BlueprintCallable)
    void AddOrUpdateKeyframe();
    
};

