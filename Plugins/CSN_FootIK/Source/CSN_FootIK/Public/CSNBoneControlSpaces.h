#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimTypes.h"
#include "CSNBoneControlSpaces.generated.h"

USTRUCT(BlueprintType)
struct FCSNBoneControlSpaces {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBoneControlSpace> TranslationSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBoneControlSpace> RotationSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBoneControlSpace> ScaleSpace;
    
    CSN_FOOTIK_API FCSNBoneControlSpaces();
};

