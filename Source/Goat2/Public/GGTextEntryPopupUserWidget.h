#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "GGPopupUserWidget.h"
#include "GGTextEntryPopupUserWidget.generated.h"

class UEditableTextBox;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGTextEntryPopupUserWidget : public UGGPopupUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* TextEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HintText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFocusTextEntryOnCreation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFocusTextEntryOnFocusReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFocusAcceptOptionOnCreation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFocusAcceptButtonOnTextCommitted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TextEntryMaxLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UserTextEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SelectAllTextWhenFocused;
    
    UGGTextEntryPopupUserWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void OnTextChanged(const FText& Text);
    
};

