#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GGThirdEyeUserWidget.generated.h"

class UMaterialInstanceDynamic;
class UTextureRenderTarget2D;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGThirdEyeUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UGGThirdEyeUserWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCaptureTexture(UTextureRenderTarget2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCaptureMaterial(UMaterialInstanceDynamic* Material);
    
};

