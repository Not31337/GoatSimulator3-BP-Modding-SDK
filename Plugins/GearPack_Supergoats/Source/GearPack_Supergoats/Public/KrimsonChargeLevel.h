#pragma once
#include "CoreMinimal.h"
#include "KrimsonChargeLevel.generated.h"

USTRUCT(BlueprintType)
struct FKrimsonChargeLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttackEffectindex;
    
    GEARPACK_SUPERGOATS_API FKrimsonChargeLevel();
};

