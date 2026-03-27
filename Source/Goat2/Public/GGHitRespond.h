#pragma once
#include "CoreMinimal.h"
#include "GGHitRespondFlag.h"
#include "GGHitRespond.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FGGHitRespond {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGHitRespondFlag IsPushable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGHitRespondFlag IsStumbleable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGHitRespondFlag IsRagdollable;
    
    FGGHitRespond();
};

