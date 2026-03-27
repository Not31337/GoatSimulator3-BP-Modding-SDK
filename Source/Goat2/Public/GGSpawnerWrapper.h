#pragma once
#include "CoreMinimal.h"
#include "GGSpawnerWrapper.generated.h"

class UGGSpawnerInterface;

USTRUCT(BlueprintType)
struct GOAT2_API FGGSpawnerWrapper {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGSpawnerInterface* Spawner;
    
public:
    FGGSpawnerWrapper();
};

