#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GGGameAssetManager -FallbackName=GGGameAssetManager
#include "GGGoatAssetManager.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGGoatAssetManager : public UAssetManager {
    GENERATED_BODY()
public:
    UGGGoatAssetManager();

};

