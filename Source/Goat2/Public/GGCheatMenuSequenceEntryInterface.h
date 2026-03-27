#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GGCheatMenuSequenceEntryInterface.generated.h"

class ULevelSequence;

UINTERFACE(Blueprintable)
class GOAT2_API UGGCheatMenuSequenceEntryInterface : public UInterface {
    GENERATED_BODY()
};

class GOAT2_API IGGCheatMenuSequenceEntryInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<ULevelSequence*> GetLevelSequences();
    
};

