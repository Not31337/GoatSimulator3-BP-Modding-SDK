#pragma once
#include "CoreMinimal.h"
#include "EInteractChances.h"
#include "EMoods.h"
#include "ENPCInteractions.h"
#include "MoodCombination.generated.h"

USTRUCT(BlueprintType)
struct FMoodCombination {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENPCInteractions Interaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoods Mood1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoods Mood2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractChances InteractChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoods RequiredInstigatorMood;
    
    GOAT2_API FMoodCombination();
};

