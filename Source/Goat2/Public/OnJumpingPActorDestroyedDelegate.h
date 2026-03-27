#pragma once
#include "CoreMinimal.h"
#include "OnJumpingPActorDestroyedDelegate.generated.h"

class AGGGoat;
class AGGJumpingPActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnJumpingPActorDestroyed, AGGGoat*, DestroyingGoat, AGGJumpingPActor*, PActor);

