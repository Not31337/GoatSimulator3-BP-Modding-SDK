#pragma once
#include "CoreMinimal.h"
#include "GGSoundAndParticleGameplayCue.h"
#include "GGGameplayCue_BoxOfSurprise_AbilityActivated.generated.h"

class UAnimSequence;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API UGGGameplayCue_BoxOfSurprise_AbilityActivated : public UGGSoundAndParticleGameplayCue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* OpenAnimation;
    
    UGGGameplayCue_BoxOfSurprise_AbilityActivated();

};

