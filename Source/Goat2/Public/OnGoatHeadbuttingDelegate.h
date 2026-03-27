#pragma once
#include "CoreMinimal.h"
#include "OnGoatHeadbuttingDelegate.generated.h"

class AActor;
class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnGoatHeadbutting, AGGGoat*, GoatHeadbutting, bool, bHitSomething, const TArray<AActor*>&, HeadbuttedActors, bool, bIsChargeHeadbutt);

