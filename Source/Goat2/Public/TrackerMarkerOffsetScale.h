#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "TrackerMarkerOffsetScale.generated.h"

USTRUCT(BlueprintType)
struct FTrackerMarkerOffsetScale {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OffsetScale;
    
    GOAT2_API FTrackerMarkerOffsetScale();
};

