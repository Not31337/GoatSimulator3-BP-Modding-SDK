#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GGEffectsSpawnResult.generated.h"

class UAudioComponent;
class UNiagaraComponent;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class GOAT2_API UGGEffectsSpawnResult : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NiagaraComponent;
    
    UGGEffectsSpawnResult();

    UFUNCTION(BlueprintCallable)
    void Destroy();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Deactivate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Activate() const;
    
};

