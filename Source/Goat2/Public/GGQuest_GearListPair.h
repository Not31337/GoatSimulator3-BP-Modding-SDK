#pragma once
#include "CoreMinimal.h"
#include "GGQuest_GearListPair.generated.h"

class AGGQuestBase;
class UGGGoatGearList;

USTRUCT(BlueprintType)
struct GOAT2_API FGGQuest_GearListPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FString EventID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    UGGGoatGearList* GearList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AGGQuestBase> Quest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEventCompleted;
    
    FGGQuest_GearListPair();
};

