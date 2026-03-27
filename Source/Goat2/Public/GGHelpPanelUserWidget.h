#pragma once
#include "CoreMinimal.h"
#include "GGUserWidget.h"
#include "GGHelpPanelUserWidget.generated.h"

class UGGRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGHelpPanelUserWidget : public UGGUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRichTextBlock* HelpBodyLabel;
    
    UGGHelpPanelUserWidget();

    UFUNCTION(BlueprintCallable)
    void SetText(FText InText);
    
};

