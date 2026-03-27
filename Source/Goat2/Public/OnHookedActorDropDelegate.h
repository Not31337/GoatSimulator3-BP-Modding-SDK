#pragma once
#include "CoreMinimal.h"
#include "OnHookedActorDropDelegate.generated.h"

class AActor;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHookedActorDrop, AActor*, HookedActor, UPrimitiveComponent*, HookedComponent);

