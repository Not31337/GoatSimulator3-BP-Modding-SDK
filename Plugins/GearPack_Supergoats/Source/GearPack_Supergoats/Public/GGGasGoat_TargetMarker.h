#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGGasGoat_TargetMarker.generated.h"

class UAudioComponent;
class UNiagaraComponent;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class GEARPACK_SUPERGOATS_API AGGGasGoat_TargetMarker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* Particles_Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* Particles_Ground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* Sound_ChargeStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* Sound_Target;
    
    AGGGasGoat_TargetMarker(const FObjectInitializer& ObjectInitializer);

};

