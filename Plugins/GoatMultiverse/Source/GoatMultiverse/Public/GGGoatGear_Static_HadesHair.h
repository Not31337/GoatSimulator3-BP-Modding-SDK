#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EStatusEffectTypes.h"
#include "GGGoatGear_Static_Base.h"
#include "GGGoatGear_Static_HadesHair.generated.h"

class AActor;
class UAudioComponent;
class UGGStatusEffectManager;
class UMaterialInterface;
class UParticleSystem;
class UParticleSystemComponent;
class USoundBase;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATMULTIVERSE_API UGGGoatGear_Static_HadesHair : public UGGGoatGear_Static_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DefaultMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* AngryMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DefaultParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* DefaultSound;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HaveAngryHair, meta=(AllowPrivateAccess=true))
    bool bHaveAngryHair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* HairParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* SoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle BeginPlayTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SetupDelay;
    
public:
    UGGGoatGear_Static_HadesHair(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_HaveAngryHair();
    
    UFUNCTION(BlueprintCallable)
    void OnActorLostStatusEffect(AActor* Actor, UGGStatusEffectManager* Manager, EStatusEffectTypes Type);
    
    UFUNCTION(BlueprintCallable)
    void DelayedBeginPlay();
    
};

