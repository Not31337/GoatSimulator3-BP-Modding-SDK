#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "EKrimsonAttackType.h"
#include "KrimsonAttack.generated.h"

USTRUCT(BlueprintType)
struct FKrimsonAttack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKrimsonAttackType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize SlamLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize SlamGroundLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartedMovingDown;
    
    GEARPACK_SUPERGOATS_API FKrimsonAttack();
};

