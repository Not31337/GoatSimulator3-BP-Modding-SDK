#pragma once
#include "CoreMinimal.h"
#include "EBodyParts.h"
#include "BodyPartRowElement.generated.h"

USTRUCT(BlueprintType)
struct FBodyPartRowElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBodyParts Part;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialIndex;
    
    GOAT2_API FBodyPartRowElement();
};

