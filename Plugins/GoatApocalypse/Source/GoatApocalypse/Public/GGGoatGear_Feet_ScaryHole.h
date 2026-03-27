#pragma once
#include "CoreMinimal.h"
#include "GGGoatGear_Scene_Feet.h"
#include "GGGoatGear_Feet_ScaryHole.generated.h"

class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGGGoatGear_Feet_ScaryHole : public UGGGoatGear_Scene_Feet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DrillBurstEffect;
    
    UGGGoatGear_Feet_ScaryHole(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastSpawnDrillBurst();
    
};

