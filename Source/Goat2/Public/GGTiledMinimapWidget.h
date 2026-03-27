#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GGTiledMinimapWidget.generated.h"

class UCanvasPanel;
class UGGMinimapDataAsset;
class UGGMinimapSubsystem;
class UImage;
class UTexture2D;
class UUniformGridPanel;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGTiledMinimapWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUniformGridPanel* GridPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* LOD0Tile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* Canvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGMinimapDataAsset* PreviewMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviewLOD;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> CurrentlyDisplayedTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGMinimapSubsystem* MinimapSubsystem;
    
public:
    UGGTiledMinimapWidget();

};

