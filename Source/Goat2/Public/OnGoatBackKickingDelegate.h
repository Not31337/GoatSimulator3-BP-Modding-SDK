#pragma once
#include "CoreMinimal.h"
#include "OnGoatBackKickingDelegate.generated.h"

class AActor;
class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnGoatBackKicking, AGGGoat*, GoatKicking, bool, bHitSomething, const TArray<AActor*>&, KickedActors);

