#pragma once
#include "CoreMinimal.h"
#include "OnDecorateThroneRoomDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDecorateThroneRoom, AActor*, DecorationActor);

