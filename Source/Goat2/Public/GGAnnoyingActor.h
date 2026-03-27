#pragma once
#include "CoreMinimal.h"
#include "GGAnnoyingActor.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct GOAT2_API FGGAnnoyingActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayedVoicelines;
    
    FGGAnnoyingActor();
};

