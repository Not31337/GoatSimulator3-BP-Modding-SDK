#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnBouncedDelegate.generated.h"

class AActor;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnBounced, AActor*, BouncedActor, UPrimitiveComponent*, BouncedComponent, FVector, BouncedVelocity);

