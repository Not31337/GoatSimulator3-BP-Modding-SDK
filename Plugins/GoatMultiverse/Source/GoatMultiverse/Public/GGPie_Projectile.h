#pragma once
#include "CoreMinimal.h"
#include "GGPhysicsProjectile.h"
#include "GGPie_Projectile.generated.h"

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGPie_Projectile : public AGGPhysicsProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpulseAgainstNPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpulseAgainstPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactOffsetAgainstNPCs;
    
public:
    AGGPie_Projectile(const FObjectInitializer& ObjectInitializer);

};

