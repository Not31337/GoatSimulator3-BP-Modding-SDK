#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GGTiledMinimapDebugWidget.generated.h"

class UGGTiledMinimapWidget;
class USlateBrushAsset;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGTiledMinimapDebugWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGTiledMinimapWidget* MinimapWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateBrushAsset* SlateBrush;
    
    UGGTiledMinimapDebugWidget();

};

