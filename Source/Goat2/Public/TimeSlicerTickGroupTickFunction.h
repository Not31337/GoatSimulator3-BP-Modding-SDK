#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "TimeSlicerTickGroupTickFunction.generated.h"

class UGGTimeSlicerSubsystem;

USTRUCT(BlueprintType)
struct FTimeSlicerTickGroupTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGTimeSlicerSubsystem* Target;
    
    GOAT2_API FTimeSlicerTickGroupTickFunction();
};

template<>
struct TStructOpsTypeTraits<FTimeSlicerTickGroupTickFunction> : public TStructOpsTypeTraitsBase2<FTimeSlicerTickGroupTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

