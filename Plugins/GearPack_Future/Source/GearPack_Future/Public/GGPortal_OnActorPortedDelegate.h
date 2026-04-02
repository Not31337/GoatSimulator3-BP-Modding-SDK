#pragma once
#include "CoreMinimal.h"
#include "GGPortal_OnActorPortedDelegate.generated.h"

class AActor;
class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGGPortal_OnActorPorted, AActor*, Actor, AGGGoat*, GoatOwner);

