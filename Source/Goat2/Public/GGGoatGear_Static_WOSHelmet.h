#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGGoatGear_Static_Base.h"
#include "GGGoatGear_Static_WOSHelmet.generated.h"

class AGGGoat;
class UAudioComponent;
class UGGAlternativeGoatDataAsset;
class UParticleSystem;
class UParticleSystemComponent;
class USoundBase;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGGoatGear_Static_WOSHelmet : public UGGGoatGear_Static_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* OngoingParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* AreaEffectParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* LoopingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParticleSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AltGoatEarsToHide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UGGAlternativeGoatDataAsset*, float> AltGoatLocationOffset;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsAbilityActive, meta=(AllowPrivateAccess=true))
    bool bIsAbilityActive;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ActivatedParticleComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* AEOParticleComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ActivatedSoundComp;
    
public:
    UGGGoatGear_Static_WOSHelmet(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_IsAbilityActive();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAltGoatChanged(AGGGoat* InGoat, UGGAlternativeGoatDataAsset* AltGoat);
    
};

