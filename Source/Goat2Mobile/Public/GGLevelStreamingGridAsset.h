#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GGLevelStreamingGridAsset.generated.h"

class UWorld;

UCLASS(Blueprintable)
class GOAT2MOBILE_API UGGLevelStreamingGridAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> StreamingManagerWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GridSizeUnrealCM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GridCountX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GridCountY;
    
    UGGLevelStreamingGridAsset();

};

