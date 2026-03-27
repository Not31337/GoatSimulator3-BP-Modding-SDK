#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AssetPack.h"
#include "MobileAssetPacksSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class MOBILEASSETPACKS_API UMobileAssetPacksSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAssetPack> OnDemandAssetPacks;
    
    UMobileAssetPacksSettings();

};

