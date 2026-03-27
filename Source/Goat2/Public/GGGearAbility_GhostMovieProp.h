#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGGearAbility.h"
#include "GhostParameters.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_GhostMovieProp.generated.h"

class AGGGhost;
class AGGNPC;
class UGGGoatGear_Static_GhostMovieProp;
class UParticleSystem;
class USoundBase;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_GhostMovieProp : public UGGGearAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGGhost> GhostType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGhostParameters GhostParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ActivationParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ActivationSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AnimationCue;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGGhost*> SpawnedGhosts;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AGGNPC*, uint32> PossessedNpcs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatGear_Static_GhostMovieProp* GhostMoviePropMesh;
    
public:
    UGGGearAbility_GhostMovieProp();

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastActivationEffects();
    
    UFUNCTION(BlueprintCallable)
    bool GhostUnpossessedNpc(AGGGhost* Ghost);
    
    UFUNCTION(BlueprintCallable)
    void GhostPossessedAnNpc(AGGGhost* Ghost);
    
};

