#pragma once
#include "CoreMinimal.h"
#include "TrackedPlaytimeSession.generated.h"

USTRUCT(BlueprintType)
struct FTrackedPlaytimeSession {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCountPlaytime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceSave;
    
    GOAT2_API FTrackedPlaytimeSession();
};

