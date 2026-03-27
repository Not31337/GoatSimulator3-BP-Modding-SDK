#pragma once
#include "CoreMinimal.h"
#include "ECanSpreadOverride.h"
#include "EHasDurationOverride.h"
#include "EStatusEffectTypes.h"
#include "StatusParticleData.h"
#include "StatusShapeData.h"
#include "Templates/SubclassOf.h"
#include "StatusEffectOverride.generated.h"

class AGGStatusEffectBase;

USTRUCT(BlueprintType)
struct FStatusEffectOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatusEffectTypes StatusEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AGGStatusEffectBase>> StatusEffectClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHasDurationOverride HasDurationOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECanSpreadOverride CanSpreadOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStatusShapeData> ShapesOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStatusParticleData> ParticleOverrides;
    
    GOAT2_API FStatusEffectOverride();
};

