#pragma once
#include "CoreMinimal.h"
#include "GGButtonUserWidget.h"
#include "GGPopupNewsTabButtonUserWidget.generated.h"

class UGGRichTextBlock;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGPopupNewsTabButtonUserWidget : public UGGButtonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TabIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NewsPreviewIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCollapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRichTextBlock* LabelDropShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* DummyText;
    
    UGGPopupNewsTabButtonUserWidget();

};

