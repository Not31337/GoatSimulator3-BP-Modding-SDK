#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GGPIDState_Vector.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FGGPIDState_Vector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastError;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector AccumulatedError;
    
    FGGPIDState_Vector();
};

