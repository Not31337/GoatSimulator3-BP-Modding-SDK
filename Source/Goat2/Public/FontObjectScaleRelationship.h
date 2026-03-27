#pragma once
#include "CoreMinimal.h"
#include "FontObjectScaleRelationship.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FFontObjectScaleRelationship {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* FontObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconScale;
    
    GOAT2_API FFontObjectScaleRelationship();
};

