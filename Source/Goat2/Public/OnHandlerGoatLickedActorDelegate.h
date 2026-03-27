#pragma once
#include "CoreMinimal.h"
#include "OnHandlerGoatLickedActorDelegate.generated.h"

class AActor;
class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHandlerGoatLickedActor, AGGGoat*, Goat, AActor*, LickedActor);

