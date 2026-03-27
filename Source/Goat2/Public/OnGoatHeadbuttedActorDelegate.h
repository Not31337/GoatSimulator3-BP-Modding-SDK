#pragma once
#include "CoreMinimal.h"
#include "OnGoatHeadbuttedActorDelegate.generated.h"

class AActor;
class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGoatHeadbuttedActor, AGGGoat*, GoatHeadbutting, AActor*, HeadbuttedActor);

