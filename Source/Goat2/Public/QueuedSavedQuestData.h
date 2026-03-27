#pragma once
#include "CoreMinimal.h"
#include "ESaveGameType.h"
#include "SavedQuestData.h"
#include "QueuedSavedQuestData.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FQueuedSavedQuestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedQuestData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveGameType SaveMethod;
    
    FQueuedSavedQuestData();
};

