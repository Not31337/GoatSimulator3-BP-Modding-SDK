#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GGBoneChain.generated.h"

class USkeleton;

USTRUCT(BlueprintType)
struct FGGBoneChain : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeleton> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Bones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadBone;
    
    GOATAPOCALYPSE_API FGGBoneChain();
};

