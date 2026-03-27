#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CheatMenuDataHolder.h"
#include "GGCheatMenuDataAsset.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGCheatMenuDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheatMenuDataHolder CheatMenuDataHolder;
    
    UGGCheatMenuDataAsset();

};

