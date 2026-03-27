#pragma once
#include "CoreMinimal.h"
#include "GGPhysicsProjectile.h"
#include "GGPhysicsProjectile_SurpriseBox.generated.h"

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGPhysicsProjectile_SurpriseBox : public AGGPhysicsProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleUpSpeed;
    
public:
    AGGPhysicsProjectile_SurpriseBox(const FObjectInitializer& ObjectInitializer);

};

