#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "GGDestructibleInfo.h"
#include "GGDestructibleUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGDestructibleUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldForceSpawnDestructible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGDestructibleInfo DestructibleInfo;
    
    UGGDestructibleUserData();

};

