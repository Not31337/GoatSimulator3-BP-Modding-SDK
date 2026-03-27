#pragma once
#include "CoreMinimal.h"
#include "GGVehicleCustomization_DelegateDelegate.generated.h"

class UGGVehicleCustomizationComponent;
class UGGVehicleCustomizationDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FGGVehicleCustomization_Delegate, UGGVehicleCustomizationDataAsset*, NewCustomization, UGGVehicleCustomizationComponent*, Component, bool, bAsHighlight);

