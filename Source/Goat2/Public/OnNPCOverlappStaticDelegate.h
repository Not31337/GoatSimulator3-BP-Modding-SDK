#pragma once
#include "CoreMinimal.h"
#include "OnNPCOverlappStaticDelegate.generated.h"

class AActor;
class AGGNPC;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnNPCOverlappStatic, AGGNPC*, NPC, AActor*, OtherActor, UPrimitiveComponent*, OtherComponent);

