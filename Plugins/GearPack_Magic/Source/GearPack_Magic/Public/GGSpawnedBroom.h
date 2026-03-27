#pragma once
#include "CoreMinimal.h"
#include "GGSpawnedBroom.generated.h"

class AGGFlyingBroom;

USTRUCT(BlueprintType)
struct GEARPACK_MAGIC_API FGGSpawnedBroom {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGFlyingBroom* Broom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBroomBeAttached;
    
    FGGSpawnedBroom();
};

