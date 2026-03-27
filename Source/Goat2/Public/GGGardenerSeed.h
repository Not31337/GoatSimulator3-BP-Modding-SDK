#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "GGPhysicsProjectile.h"
#include "Templates/SubclassOf.h"
#include "GGGardenerSeed.generated.h"

class AGGGardenerPlant;

UCLASS(Blueprintable)
class GOAT2_API AGGGardenerSeed : public AGGPhysicsProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGGardenerPlant> GardenderClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGardenerPlant* Plant;
    
public:
    AGGGardenerSeed(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnSeed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHitNothing(FVector_NetQuantize HitLocation);
    
};

