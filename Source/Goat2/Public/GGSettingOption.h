#pragma once
#include "CoreMinimal.h"
#include "GGSettingOption.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FGGSettingOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    FGGSettingOption();
};

