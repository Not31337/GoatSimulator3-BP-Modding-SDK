#pragma once
#include "CoreMinimal.h"
#include "SpawnParams.h"
#include "SpawnData.generated.h"

USTRUCT(BlueprintType)
struct FSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnParams Params;
    
    GOAT2_API FSpawnData();
};

