#pragma once
#include "CoreMinimal.h"
#include "GGAttachPoints.generated.h"

class UGGAttachmentPoint;

USTRUCT(BlueprintType)
struct GOATAPOCALYPSE_API FGGAttachPoints {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGAttachmentPoint* Our;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGAttachmentPoint* Other;
    
    FGGAttachPoints();
};

