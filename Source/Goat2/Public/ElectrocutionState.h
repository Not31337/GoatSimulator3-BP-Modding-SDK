#pragma once
#include "CoreMinimal.h"
#include "ElectrocutionState.generated.h"

USTRUCT(BlueprintType)
struct FElectrocutionState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bElectrocuting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bElectrocutingGoat;
    
    GOAT2_API FElectrocutionState();
};

