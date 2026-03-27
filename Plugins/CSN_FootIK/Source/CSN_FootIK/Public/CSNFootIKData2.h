#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CSNOffsetIK.h"
#include "CSNFootIKData2.generated.h"

USTRUCT(BlueprintType)
struct CSN_FOOTIK_API FCSNFootIKData2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSNOffsetIK PelvisOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCSNOffsetIK> FootOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> LockingTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> LockingAlphas;
    
    FCSNFootIKData2();
};

