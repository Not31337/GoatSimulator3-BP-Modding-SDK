#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGInstinct.h"
#include "GGInstinct_LightningStrikeNpcs.generated.h"

class AActor;
class AGGExplosiveActor;
class AGGGoat;
class UGGGearAbility_LightningBolts;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGInstinct_LightningStrikeNpcs : public AGGInstinct {
    GENERATED_BODY()
public:
    AGGInstinct_LightningStrikeNpcs(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnLightningBoltsGearActivated(const UGGGearAbility_LightningBolts* Ability, AGGExplosiveActor* Explosive);
    
    UFUNCTION(BlueprintCallable)
    void OnLightningBoltExploded(AGGExplosiveActor* ExplosiveActor, const TArray<AActor*>& HitActors);
    
    UFUNCTION(BlueprintCallable)
    void OnInstinctTriggered(AGGGoat* Goat, FGameplayTag InstinctTag);
    
};

