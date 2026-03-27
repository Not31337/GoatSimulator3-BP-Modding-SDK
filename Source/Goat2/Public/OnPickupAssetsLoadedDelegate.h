#pragma once
#include "CoreMinimal.h"
#include "MatElement.h"
#include "OnPickupAssetsLoadedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnPickupAssetsLoaded, UObject*, Mesh, const TArray<FMatElement>&, Materials);

