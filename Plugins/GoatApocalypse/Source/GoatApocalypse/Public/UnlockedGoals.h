#pragma once
#include "CoreMinimal.h"
#include "UnlockedGoals.generated.h"

class AGGCastleStretchGoal_Apocalypse;

USTRUCT(BlueprintType)
struct FUnlockedGoals {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLookedForGoals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGCastleStretchGoal_Apocalypse*> GoalsToQuery;
    
    GOATAPOCALYPSE_API FUnlockedGoals();
};

