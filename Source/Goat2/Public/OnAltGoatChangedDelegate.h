#pragma once
#include "CoreMinimal.h"
#include "OnAltGoatChangedDelegate.generated.h"

class AGGGoat;
class UGGAlternativeGoatDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAltGoatChanged, AGGGoat*, Goat, UGGAlternativeGoatDataAsset*, NewAltGoat);

