#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DLCLevelData.h"
#include "EPopupResponse.h"
#include "GGMenuUserWidget.h"
#include "GGTitleScreen.generated.h"

class UGGPopupUserWidget;
class UObject;

UCLASS(Blueprintable, EditInlineNew, Config=Engine)
class GOAT2_API UGGTitleScreen : public UGGMenuUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LastOpenedMenuTab;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGGPopupUserWidget> GameNightControllerRemovedPopup;
    
    UGGTitleScreen();

private:
    UFUNCTION(BlueprintCallable)
    void GameNightDisconnectedPopupResponse(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AttemptToStartLevel(FDLCLevelData LevelData);
    
};

