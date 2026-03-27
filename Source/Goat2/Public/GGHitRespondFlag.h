#pragma once
#include "CoreMinimal.h"
#include "EGGImpactResult.h"
#include "GGHitRespondFlag.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FGGHitRespondFlag {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldRespond;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGGImpactResult RespondsWhenCrouched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGGImpactResult RespondsWhenProne;
    
    FGGHitRespondFlag();
};

