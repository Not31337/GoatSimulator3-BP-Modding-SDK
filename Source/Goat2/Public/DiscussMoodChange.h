#pragma once
#include "CoreMinimal.h"
#include "EMoods.h"
#include "DiscussMoodChange.generated.h"

USTRUCT(BlueprintType)
struct FDiscussMoodChange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoods Mood1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoods Mood2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMoods> MoodChangeArray;
    
    GOAT2_API FDiscussMoodChange();
};

