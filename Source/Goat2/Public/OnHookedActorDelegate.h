#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnHookedActorDelegate.generated.h"

class AActor;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnHookedActor, AActor*, HookedActor, UPrimitiveComponent*, HookedComponent, FVector, ImpactPoint, AActor*, GGStaticMeshOwner);

