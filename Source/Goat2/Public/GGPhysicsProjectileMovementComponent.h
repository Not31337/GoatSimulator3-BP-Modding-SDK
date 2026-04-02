#pragma once
#include "CoreMinimal.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GGPhysicsProjectileMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGPhysicsProjectileMovementComponent : public UProjectileMovementComponent {
    GENERATED_BODY()
public:
    UGGPhysicsProjectileMovementComponent(const FObjectInitializer& ObjectInitializer);

};

