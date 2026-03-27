#pragma once
#include "CoreMinimal.h"
#include "AssetPack.generated.h"

USTRUCT(BlueprintType)
struct FAssetPack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PackName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Chunks;
    
    MOBILEASSETPACKS_API FAssetPack();
};

