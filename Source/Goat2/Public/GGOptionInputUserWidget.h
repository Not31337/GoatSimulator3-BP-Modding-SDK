#pragma once
#include "CoreMinimal.h"
#include "Framework/Commands/InputChord.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "EPopupResponse.h"
#include "GGGameSettingOptionUserWidget.h"
#include "Templates/SubclassOf.h"
#include "GGOptionInputUserWidget.generated.h"

class UGGButton;
class UGGButtonUserWidget;
class UGGKeyRebindPopupUserWidget;
class UGGPopupUserWidget;
class UGGRichTextBlock;
class UGGUserWidget;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGOptionInputUserWidget : public UGGGameSettingOptionUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGButton* InputKeySelectorButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRichTextBlock* KeyboardInputButtonShower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRichTextBlock* MouseInputButtonShower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRichTextBlock* GamepadInputButtonShower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGButtonUserWidget* ResetButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonInputTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGKeyRebindPopupUserWidget> PopUpClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGPopupUserWidget* PopupUserWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasKeyboardBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasMouseBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasGamepadBinding;
    
public:
    UGGOptionInputUserWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateInputBindingTypes();
    
    UFUNCTION(BlueprintCallable)
    void UpdateButtonText();
    
    UFUNCTION(BlueprintCallable)
    void OnResetButtonPressed(UGGUserWidget* Widget, FPointerEvent PointerEvent, FKeyEvent KeyEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnKeySelectorButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnGamepadChanged(bool bIsUsingGamepad);
    
    UFUNCTION(BlueprintCallable)
    void KeyRebindPopUpResponds(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerUsingAGamepad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyConflictingAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetKeySymbolForInputChord(const FInputChord& InputChord) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetInputButtonSymbol(const FString& InputType) const;
    
    UFUNCTION(BlueprintCallable)
    void ConflictingDefaultBindingPopupRespond(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response);
    
};

