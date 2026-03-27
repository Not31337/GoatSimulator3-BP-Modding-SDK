#pragma once
#include "CoreMinimal.h"
#include "OnHandlerGoatHeadbuttedActorDelegate.generated.h"

class AActor;
class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHandlerGoatHeadbuttedActor, AGGGoat*, Goat, AActor*, HeadbuttedActor);

