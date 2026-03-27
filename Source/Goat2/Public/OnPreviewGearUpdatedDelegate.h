#pragma once
#include "CoreMinimal.h"
#include "OnPreviewGearUpdatedDelegate.generated.h"

class AGGGoat;
class USceneComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPreviewGearUpdated, AGGGoat*, Goat, const TArray<USceneComponent*>&, CurrentPreviewGear);

