#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "QuestTier.h"
#include "GGQuestTypesBlueprintFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGQuestTypesBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGGQuestTypesBlueprintFunctionLibrary();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 QuestTier_GetUpdateInterval(const FQuestTier& QuestTier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 QuestTier_GetTargetProgress(const FQuestTier& QuestTier);
    
};

