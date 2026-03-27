#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotify_Actor.h"
#include "GGGameplayCue_LightningBolts_Charging.generated.h"

class UAudioComponent;
class UParticleSystem;
class UParticleSystemComponent;
class USceneComponent;
class USoundBase;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGGameplayCue_LightningBolts_Charging : public AGameplayCueNotify_Actor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* StartChargingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticlesChargeStage1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticlesChargeStage2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticlesChargeStage3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DischargeParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParticlesAttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ChargingSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ChargingParticles;
    
public:
    AGGGameplayCue_LightningBolts_Charging(const FObjectInitializer& ObjectInitializer);

};

