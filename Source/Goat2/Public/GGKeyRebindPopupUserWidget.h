#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "GGPopupUserWidget.h"
#include "GGKeyRebindPopupUserWidget.generated.h"

class UGGButtonUserWidget;
class UGGOptionInputUserWidget;
class UGGRichTextBlock;
class USizeBox;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGKeyRebindPopupUserWidget : public UGGPopupUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRichTextBlock* CollisionDetectedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* PopupBodySizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRichTextBlock* PressButtonToRebindText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGButtonUserWidget* ChangeBindingButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGButtonUserWidget* CancelButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGButtonUserWidget* KeepButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGButtonUserWidget* RemoveButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FKey> EscapeKeys;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGOptionInputUserWidget* OwningInputUserWidget;
    
public:
    UGGKeyRebindPopupUserWidget();

};

