#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CheatMenuDataEntry.h"
#include "GGCheatEntryObject.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGCheatEntryObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheatMenuDataEntry CheatMenuEntryHolder;
    
    UGGCheatEntryObject();

};

