#pragma once
#include "CoreMinimal.h"
#include "EGoatDLC.h"
#include "DLCAssetLink.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FDLCAssetLink {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGoatDLC DLC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AssetPath;
    
    FDLCAssetLink();
};

