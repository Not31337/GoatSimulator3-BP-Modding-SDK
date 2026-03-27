#pragma once
#include "CoreMinimal.h"
#include "OnGoatKickedActorDelegate.generated.h"

class AActor;
class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGoatKickedActor, AGGGoat*, GoatKicking, AActor*, KickedActor);

