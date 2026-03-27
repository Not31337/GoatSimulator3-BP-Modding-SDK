#pragma once
#include "CoreMinimal.h"
#include "LoadingWidgetParameter.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FLoadingWidgetParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString String;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Float;
    
    GOAT2_API FLoadingWidgetParameter();
};

