#pragma once
#include "CoreMinimal.h"
#include "GGGoatGear_Scene_Feet.h"
#include "GGGoatGear_Scene_Feet_GasGoat.generated.h"

class UNiagaraComponent;
class UNiagaraSystem;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEARPACK_SUPERGOATS_API UGGGoatGear_Scene_Feet_GasGoat : public UGGGoatGear_Scene_Feet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleSystem_IsUsable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ParticleSystem_IsDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> Particles_IsDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> Particles_IsUsable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsAbilityUsable, meta=(AllowPrivateAccess=true))
    bool bIsAbilityUsable;
    
    UGGGoatGear_Scene_Feet_GasGoat(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_IsAbilityUsable();
    
};

