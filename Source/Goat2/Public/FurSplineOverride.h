#pragma once
#include "CoreMinimal.h"
#include "FurSplineOverride.generated.h"

class UFurSplines;
class UGGGoatGear_Scene_Fur;
class UGGGoatGear_Skel_Body;

USTRUCT(BlueprintType)
struct FFurSplineOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatGear_Skel_Body* BodyGear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFurSplines* Body_FurSplineOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatGear_Scene_Fur* FurGear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFurSplines* Fur_FurSplineOverride;
    
    GOAT2_API FFurSplineOverride();
};

