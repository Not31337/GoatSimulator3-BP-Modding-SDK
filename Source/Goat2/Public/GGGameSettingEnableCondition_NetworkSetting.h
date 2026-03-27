#pragma once
#include "CoreMinimal.h"
#include "EGGGameSettingChangeContext.h"
#include "GGGameSetting.h"
#include "GGGameSettingEnableCondition.h"
#include "GGGameSettingEnableCondition_NetworkSetting.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGGameSettingEnableCondition_NetworkSetting : public UGGGameSettingEnableCondition {
    GENERATED_BODY()
public:
    UGGGameSettingEnableCondition_NetworkSetting();

    UFUNCTION(BlueprintCallable)
    void OnSessionProcessComplete(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void OnNetworkSettingChanged(FGGGameSetting& NetworkSetting, EGGGameSettingChangeContext InContext);
    
};

