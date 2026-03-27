#pragma once
#include "CoreMinimal.h"
#include "GGQuestBase.h"
#include "RadarCoordinateData.h"
#include "GGTrinket.generated.h"

class AGGGoat;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGTrinket : public AGGQuestBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadarCoordinateData TrinketRadarDataFound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadarCoordinateData TrinketRadarDataNotFound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PickupSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PickupPraticle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* KarmaParticleComp;
    
public:
    AGGTrinket(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetupTrinket();
    
    UFUNCTION(BlueprintCallable)
    void PlayEffectsOnGoat(AGGGoat* Goat);
    
};

