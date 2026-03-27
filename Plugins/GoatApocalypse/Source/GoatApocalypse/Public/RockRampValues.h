#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERockRampState.h"
#include "RockRampValues.generated.h"

USTRUCT(BlueprintType)
struct FRockRampValues {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ERockRampState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GoatStartLocation;
    
    GOATAPOCALYPSE_API FRockRampValues();
};

