#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERotationPreset.h"
#include "GGSpawnerModifierInterface.h"
#include "GGSplineSpawnerModifier_RandomRotation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGSplineSpawnerModifier_RandomRotation : public UGGSpawnerModifierInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERotationPreset Preset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RollRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D PitchRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D YawRange;
    
    UGGSplineSpawnerModifier_RandomRotation();

};

