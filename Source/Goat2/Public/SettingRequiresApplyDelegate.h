#pragma once
#include "CoreMinimal.h"
#include "SettingRequiresApplyDelegate.generated.h"

class UGGGameSettingOptionUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSettingRequiresApply, UGGGameSettingOptionUserWidget*, GameSetting);

