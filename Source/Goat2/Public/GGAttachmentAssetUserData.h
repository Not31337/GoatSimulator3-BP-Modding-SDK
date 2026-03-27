#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/AssetUserData.h"
#include "GGAttachmentAssetUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGAttachmentAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FTransform> NPCAttachmentTransforms;
    
    UGGAttachmentAssetUserData();

};

