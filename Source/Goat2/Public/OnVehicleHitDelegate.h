#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "OnVehicleHitDelegate.generated.h"

class AActor;
class AGGVehicle;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FOnVehicleHit, AGGVehicle*, Vehicle, AActor*, OtherActor, UPrimitiveComponent*, OtherComponent, float, ImpactSize, float, OtherImpactSize, FHitResult, HitResult);

