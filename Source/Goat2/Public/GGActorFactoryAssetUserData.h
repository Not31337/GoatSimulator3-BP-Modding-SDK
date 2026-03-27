#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "GGActorFactoryAssetUserData.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGActorFactoryAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> BlueprintToSpawn;
    
    UGGActorFactoryAssetUserData();

};

