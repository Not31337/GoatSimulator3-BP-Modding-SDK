#pragma once
#include "CoreMinimal.h"
#include "OnGGStaticMeshLickDroppedDelegate.generated.h"

class AGGGoat;
class UGGStaticMeshComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGGStaticMeshLickDropped, UGGStaticMeshComponent*, GGMeshComponent, AGGGoat*, LickingGoat);

