#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CSNOffsetIK.h"
#include "CSNFootIKData.generated.h"

USTRUCT(BlueprintType)
struct CSN_FOOTIK_API FCSNFootIKData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSNOffsetIK PelvisOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCSNOffsetIK> FootOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCSNOffsetIK> LockingTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> LockingAlphas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> FootTransformsForRagdoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> FootBoneTransforms;
    
    FCSNFootIKData();
};

