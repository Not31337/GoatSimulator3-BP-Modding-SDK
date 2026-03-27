#pragma once
#include "CoreMinimal.h"
#include "GGPopupUserWidget.h"
#include "GGResetSavePopupUserWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGResetSavePopupUserWidget : public UGGPopupUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LastDeletedNoticeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* PopupLastRemovedLabel;
    
    UGGResetSavePopupUserWidget();

};

