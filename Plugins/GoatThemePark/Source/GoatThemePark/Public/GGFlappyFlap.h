#pragma once
#include "CoreMinimal.h"
#include "GGFlappyFlap.generated.h"

USTRUCT(BlueprintType)
struct FGGFlappyFlap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightAtFlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 FlapId;
    
    GOATTHEMEPARK_API FGGFlappyFlap();
};

