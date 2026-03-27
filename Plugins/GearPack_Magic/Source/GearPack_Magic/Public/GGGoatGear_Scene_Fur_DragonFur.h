#pragma once
#include "CoreMinimal.h"
#include "GGGoatGear_Scene_Fur.h"
#include "GGGoatGear_Scene_Fur_DragonFur.generated.h"

class AActor;
class AGGDragonFurTornado;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEARPACK_MAGIC_API UGGGoatGear_Scene_Fur_DragonFur : public UGGGoatGear_Scene_Fur {
    GENERATED_BODY()
public:
    UGGGoatGear_Scene_Fur_DragonFur(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnTornadoStartedSpinMulticast(AActor* AffectedActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTornadoStartedSpin(AActor* AffectedActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnTornadoAppliedImpulseMulticast(AActor* AffectedActor, AGGDragonFurTornado* AffectingTornado);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTornadoAppliedImpulse(AActor* AffectedActor, AGGDragonFurTornado* AffectingTornado);
    
};

