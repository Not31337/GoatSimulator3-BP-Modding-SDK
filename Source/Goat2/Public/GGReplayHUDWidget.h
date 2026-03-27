#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GGReplayHUDWidget.generated.h"

class AGGReplayPlayerController;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGReplayHUDWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGReplayPlayerController* OwningReplayPlayerController;
    
    UGGReplayHUDWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleReplayUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKeyframesUpdated();
    
};

