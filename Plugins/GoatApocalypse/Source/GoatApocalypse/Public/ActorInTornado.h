#pragma once
#include "CoreMinimal.h"
#include "ActorInTornado.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorInTornado {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    GOATAPOCALYPSE_API FActorInTornado();
};

