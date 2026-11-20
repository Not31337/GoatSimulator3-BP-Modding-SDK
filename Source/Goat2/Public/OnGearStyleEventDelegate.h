#pragma once
#include "CoreMinimal.h"
#include "OnGearStyleEventDelegate.generated.h"

class UGGGoatGearStyleDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGearStyleEvent, UGGGoatGearStyleDataAsset*, StyleData);

