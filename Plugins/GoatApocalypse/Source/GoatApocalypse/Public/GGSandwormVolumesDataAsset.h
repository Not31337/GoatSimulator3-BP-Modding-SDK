#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GGSandwormVolumesDataAsset.generated.h"

class AActor;

UCLASS(Blueprintable)
class UGGSandwormVolumesDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> RestrictedVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> AllowedVolumes;
    
    UGGSandwormVolumesDataAsset();

};

