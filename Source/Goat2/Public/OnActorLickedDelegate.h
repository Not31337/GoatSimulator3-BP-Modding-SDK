#pragma once
#include "CoreMinimal.h"
#include "OnActorLickedDelegate.generated.h"

class AActor;
class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActorLicked, AActor*, LickedActor, AGGGoat*, LickingGoat);

