#pragma once
#include "CoreMinimal.h"
#include "GGEffectSpawnHolder.h"
#include "CurrencyType.generated.h"

class UParticleSystem;
class USoundBase;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FCurrencyType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* CollectParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* CollectSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGEffectSpawnHolder CollectEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* CurrencyMesh;
    
    GOATAPOCALYPSE_API FCurrencyType();
};

