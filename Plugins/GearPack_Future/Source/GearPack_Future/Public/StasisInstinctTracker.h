#pragma once
#include "CoreMinimal.h"
#include "StasisInstinctTracker.generated.h"

class AActor;
class AGGPlayerState;

USTRUCT(BlueprintType)
struct FStasisInstinctTracker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerState* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StasisLandCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> StasisActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastStasisActor;
    
    GEARPACK_FUTURE_API FStasisInstinctTracker();
};

