#pragma once
#include "CoreMinimal.h"
#include "ActorDataMap.generated.h"

USTRUCT(BlueprintType)
struct FActorDataMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasServerData;
    
    GOAT2_API FActorDataMap();
};

