#pragma once
#include "CoreMinimal.h"
#include "JumpModifierEffectSettings.generated.h"

class UParticleSystem;
class USoundBase;

USTRUCT(BlueprintType)
struct FJumpModifierEffectSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* JumpParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* TrailingParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* JumpSound;
    
    GOAT2_API FJumpModifierEffectSettings();
};

