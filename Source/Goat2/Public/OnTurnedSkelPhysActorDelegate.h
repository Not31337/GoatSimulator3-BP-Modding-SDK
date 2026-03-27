#pragma once
#include "CoreMinimal.h"
#include "OnTurnedSkelPhysActorDelegate.generated.h"

class AActor;
class AGGPhysicsActor_Base;
class UGGSkeletalMeshComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnTurnedSkelPhysActor, AActor*, OwningActor, UGGSkeletalMeshComponent*, GGMeshComponent, AGGPhysicsActor_Base*, PhysActor);

