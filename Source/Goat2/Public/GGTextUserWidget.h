#pragma once
#include "CoreMinimal.h"
#include "GGUserWidget.h"
#include "GGTextUserWidget.generated.h"

class UGGRichTextBlock;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGTextUserWidget : public UGGUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRichTextBlock* TextLabelRich;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TextLabel;
    
    UGGTextUserWidget();

};

