#pragma once
#include "CoreMinimal.h"
#include "OnGoatAbilityLickEatAteActorDelegate.generated.h"

class AActor;
class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGoatAbilityLickEatAteActor, AGGGoat*, GoatLicking, AActor*, EatenActor);

