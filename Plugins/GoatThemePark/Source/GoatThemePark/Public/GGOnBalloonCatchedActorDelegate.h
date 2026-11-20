#pragma once
#include "CoreMinimal.h"
#include "GGOnBalloonCatchedActorDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGGOnBalloonCatchedActor, AActor*, Actor);

