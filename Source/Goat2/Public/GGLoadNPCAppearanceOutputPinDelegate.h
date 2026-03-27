#pragma once
#include "CoreMinimal.h"
#include "LoadedAppearancePart.h"
#include "GGLoadNPCAppearanceOutputPinDelegate.generated.h"

class UMaterialInterface;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGGLoadNPCAppearanceOutputPin, const TArray<FLoadedAppearancePart>&, AppearanceParts, UMaterialInterface*, SkinMaterial);

