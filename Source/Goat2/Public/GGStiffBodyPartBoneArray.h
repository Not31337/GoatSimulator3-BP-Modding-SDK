#pragma once
#include "CoreMinimal.h"
#include "GGStiffBodyPartBoneArray.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FGGStiffBodyPartBoneArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BoneNames;
    
    FGGStiffBodyPartBoneArray();
};

