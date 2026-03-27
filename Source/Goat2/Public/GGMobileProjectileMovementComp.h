#pragma once
#include "CoreMinimal.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GGMobileProjectileMovementComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGMobileProjectileMovementComp : public UProjectileMovementComponent {
    GENERATED_BODY()
public:
    UGGMobileProjectileMovementComp(const FObjectInitializer& ObjectInitializer);

};

