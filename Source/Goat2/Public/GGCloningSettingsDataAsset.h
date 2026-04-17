#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GGCloningSettings.h"
#include "GGCloningSettingsDataAsset.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGCloningSettingsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGCloningSettings Settings;
    
    UGGCloningSettingsDataAsset();

};

