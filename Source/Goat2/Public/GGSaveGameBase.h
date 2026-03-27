#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "KeyValueBase.h"
#include "SavedQuestData.h"
#include "GGSaveGameBase.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGSaveGameBase : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedQuestData> QuestProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FKeyValueBase> KeyValueData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> CompletedEvents;
    
    UGGSaveGameBase();

};

