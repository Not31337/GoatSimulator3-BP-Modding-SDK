#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "CSNLegDefinition.h"
#include "CSNIKBoneContainer.generated.h"

USTRUCT(BlueprintType)
struct CSN_FOOTIK_API FCSNIKBoneContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference PelvisBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCSNLegDefinition> LegDefinitions;
    
    FCSNIKBoneContainer();
};

