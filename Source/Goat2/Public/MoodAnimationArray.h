#pragma once
#include "CoreMinimal.h"
#include "GGRandomPlayerSequenceEntry.h"
#include "EMoods.h"
#include "MoodAnimationArray.generated.h"

USTRUCT(BlueprintType)
struct FMoodAnimationArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoods Mood;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGRandomPlayerSequenceEntry> OverrideAnimations;
    
    GOAT2_API FMoodAnimationArray();
};

