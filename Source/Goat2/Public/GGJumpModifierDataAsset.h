#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "JumpModifierEffectSettings.h"
#include "JumpModifierSettings.h"
#include "GGJumpModifierDataAsset.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGJumpModifierDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJumpModifierSettings ModifierSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJumpModifierEffectSettings ModifierEffectSettings;
    
    UGGJumpModifierDataAsset();

};

