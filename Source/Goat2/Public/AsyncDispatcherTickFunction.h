#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "AsyncDispatcherTickFunction.generated.h"

class UGGAsyncOverlapSubsystem;

USTRUCT(BlueprintType)
struct FAsyncDispatcherTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGAsyncOverlapSubsystem* Target;
    
    GOAT2_API FAsyncDispatcherTickFunction();
};

template<>
struct TStructOpsTypeTraits<FAsyncDispatcherTickFunction> : public TStructOpsTypeTraitsBase2<FAsyncDispatcherTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

