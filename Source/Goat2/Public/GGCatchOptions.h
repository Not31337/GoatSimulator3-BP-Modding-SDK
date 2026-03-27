#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EGGLocationSpace.h"
#include "GGCatchOptions.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FGGCatchOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HoldingLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGGLocationSpace LocationSpace;
    
    FGGCatchOptions();
};

