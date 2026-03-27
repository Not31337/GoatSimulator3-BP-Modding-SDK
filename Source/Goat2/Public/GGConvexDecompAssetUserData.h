#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "GGConvexDecompAssetUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGConvexDecompAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBeSkipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsConvexDecompositionDone;
    
    UGGConvexDecompAssetUserData();

};

