#pragma once
#include "CoreMinimal.h"
#include "GGGameSetting.h"
#include "GGOnSettingApplied_K2DelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGGOnSettingApplied_K2Delegate, const FGGGameSetting&, ChangedSetting, const FString&, NewValue);

