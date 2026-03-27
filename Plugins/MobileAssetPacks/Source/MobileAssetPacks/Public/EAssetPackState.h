#pragma once
#include "CoreMinimal.h"
#include "EAssetPackState.generated.h"

UENUM(BlueprintType)
enum class EAssetPackState : uint8 {
    Error,
    NotAvailable,
    Downloading,
    Installed,
    Canceled,
    WaitingForWifi,
};

