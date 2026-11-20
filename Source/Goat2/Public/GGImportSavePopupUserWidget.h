#pragma once
#include "CoreMinimal.h"
#include "GGPopupUserWidget.h"
#include "GGImportSavePopupUserWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGImportSavePopupUserWidget : public UGGPopupUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LastImportNoticeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* PopupLastImportedLabel;
    
    UGGImportSavePopupUserWidget();

};

