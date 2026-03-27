#pragma once
#include "CoreMinimal.h"
#include "OnTurnedPhysActorDelegate.generated.h"

class AActor;
class AGGPhysicsActor_Base;
class UGGStaticMeshComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnTurnedPhysActor, AActor*, OwningActor, UGGStaticMeshComponent*, GGMeshComponent, AGGPhysicsActor_Base*, PhysActor);

