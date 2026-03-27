#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GGBodyKitMeshOffset.generated.h"

USTRUCT(BlueprintType)
struct GOATAPOCALYPSE_API FGGBodyKitMeshOffset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Offset;
    
    FGGBodyKitMeshOffset();
};

