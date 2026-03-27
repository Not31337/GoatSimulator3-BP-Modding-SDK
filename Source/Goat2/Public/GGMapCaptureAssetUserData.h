#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "EGGMeshType.h"
#include "GGMapCaptureAssetUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGMapCaptureAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CustomHighlightColorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGGMeshType MeshType;
    
    UGGMapCaptureAssetUserData();

};

