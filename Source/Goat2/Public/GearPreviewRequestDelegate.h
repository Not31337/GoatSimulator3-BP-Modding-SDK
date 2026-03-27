#pragma once
#include "CoreMinimal.h"
#include "GearPreviewRequestDelegate.generated.h"

class UGGGoatGearInfoDataAsset;
class UGGUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGearPreviewRequest, UGGUserWidget*, Widget, UGGGoatGearInfoDataAsset*, GearData);

