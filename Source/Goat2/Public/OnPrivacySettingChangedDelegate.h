#pragma once
#include "CoreMinimal.h"
#include "ELobbyPrivacySetting.h"
#include "OnPrivacySettingChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPrivacySettingChanged, TEnumAsByte<ELobbyPrivacySetting>, PrivacySetting, bool, bSuccess);

