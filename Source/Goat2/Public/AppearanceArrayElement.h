#pragma once
#include "CoreMinimal.h"
#include "AppearanceArrayElement.generated.h"

USTRUCT(BlueprintType)
struct FAppearanceArrayElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Accessory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialIndex;
    
    GOAT2_API FAppearanceArrayElement();
};

