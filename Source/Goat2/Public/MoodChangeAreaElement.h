#pragma once
#include "CoreMinimal.h"
#include "EMoodChange.h"
#include "EMoods.h"
#include "MoodChangeAreaElement.generated.h"

USTRUCT(BlueprintType)
struct FMoodChangeAreaElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoodChange Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceToChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMoods> SkipMoods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipRagdolls;
    
    GOAT2_API FMoodChangeAreaElement();
};

