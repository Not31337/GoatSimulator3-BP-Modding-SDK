#pragma once
#include "CoreMinimal.h"
#include "OnGoatDroppedLickedActorDelegate.generated.h"

class AActor;
class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGoatDroppedLickedActor, AGGGoat*, GoatLicking, AActor*, LickedActor);

