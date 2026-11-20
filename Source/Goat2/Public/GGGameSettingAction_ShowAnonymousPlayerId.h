#pragma once
#include "CoreMinimal.h"
#include "EPopupResponse.h"
#include "GGGameSettingAction.h"
#include "GGGameSettingAction_ShowAnonymousPlayerId.generated.h"

class UObject;

UCLASS(Blueprintable)
class GOAT2_API UGGGameSettingAction_ShowAnonymousPlayerId : public UGGGameSettingAction {
    GENERATED_BODY()
public:
    UGGGameSettingAction_ShowAnonymousPlayerId();

protected:
    UFUNCTION(BlueprintCallable)
    void PopUpCallback(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response);
    
};

