#pragma once
#include "CoreMinimal.h"
#include "PlayerPostProcessMultiRequest.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPlayerPostProcessMultiRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AActor*> RequestingActors;
    
    GOAT2_API FPlayerPostProcessMultiRequest();
};

