#pragma once
#include "CoreMinimal.h"
#include "LoadedAppearancePart.h"
#include "GGLoadNPCAppearanceNoSubSysOutputPinDelegate.generated.h"

class UMaterialInterface;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGGLoadNPCAppearanceNoSubSysOutputPin, const TArray<FLoadedAppearancePart>&, AppearanceParts, UMaterialInterface*, SkinMaterial);

