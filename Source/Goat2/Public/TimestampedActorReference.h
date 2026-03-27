#pragma once
#include "CoreMinimal.h"
#include "TimestampedActorReference.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTimestampedActorReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    GOAT2_API FTimestampedActorReference();
};

