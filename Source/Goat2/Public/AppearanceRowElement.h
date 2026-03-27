#pragma once
#include "CoreMinimal.h"
#include "AppearanceRowElement.generated.h"

USTRUCT(BlueprintType)
struct FAppearanceRowElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialIndex;
    
    GOAT2_API FAppearanceRowElement();
};

