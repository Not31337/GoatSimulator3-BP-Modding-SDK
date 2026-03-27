#pragma once
#include "CoreMinimal.h"
#include "GGOnExplosiveActorExplodedDelegate.generated.h"

class AGGExplosiveActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGGOnExplosiveActorExploded, AGGExplosiveActor*, TheActor);

