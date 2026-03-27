#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "GGNamedActorInfo.h"
#include "GGNameAssetUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGNameAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGNamedActorInfo NameInfo;
    
    UGGNameAssetUserData();

};

