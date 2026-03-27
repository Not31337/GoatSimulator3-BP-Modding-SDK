#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "WallrunModifierEffectSettings.h"
#include "WallrunModifierSettings.h"
#include "GGWallrunModifierDataAsset.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGWallrunModifierDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWallrunModifierSettings ModifierSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWallrunModifierEffectSettings ModifierEffectSettings;
    
    UGGWallrunModifierDataAsset();

};

