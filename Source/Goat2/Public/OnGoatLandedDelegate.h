#pragma once
#include "CoreMinimal.h"
#include "OnGoatLandedDelegate.generated.h"

class AActor;
class AGGGoat;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnGoatLanded, AGGGoat*, Goat, AActor*, FloorActor, UPrimitiveComponent*, FloorComponent);

