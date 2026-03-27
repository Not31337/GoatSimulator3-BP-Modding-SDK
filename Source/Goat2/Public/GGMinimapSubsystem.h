#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GGWorldSubsystem.h"
#include "GGMinimapSubsystem.generated.h"

class UGGMinimapDataAsset;
class UTexture2D;

UCLASS(Blueprintable, Config=Game)
class GOAT2_API UGGMinimapSubsystem : public UGGWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreLoadTilesToThisLOD;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGMinimapDataAsset* MinimapDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> PreLoadedTextures;
    
public:
    UGGMinimapSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMinimap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTextureScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfLODs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMapSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGMinimapDataAsset* GetDataAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCaptureRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetCaptureOffset() const;
    
};

