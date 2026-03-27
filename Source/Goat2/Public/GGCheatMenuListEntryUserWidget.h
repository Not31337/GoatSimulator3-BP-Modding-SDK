#pragma once
#include "CoreMinimal.h"
#include "GGListEntryUserWidget.h"
#include "Templates/SubclassOf.h"
#include "GGCheatMenuListEntryUserWidget.generated.h"

class UCheckBox;
class UGGCheatEntryObject;
class UGGGameSettingOptionUserWidget;
class UNamedSlot;
class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGCheatMenuListEntryUserWidget : public UGGListEntryUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNamedSlot* SelectionSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* FavoriteOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCheckBox* FavoriteCheckbox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGameSettingOptionUserWidget* OptionWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGCheatEntryObject* CheatListItemObject;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGGameSettingOptionUserWidget> BoolOptionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGGameSettingOptionUserWidget> SliderOptionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGGameSettingOptionUserWidget> MultipleOptionsOptionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGGameSettingOptionUserWidget> DropdownOptionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGGameSettingOptionUserWidget> ButtonOptionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGGameSettingOptionUserWidget> TextInputOptionWidgetClass;
    
public:
    UGGCheatMenuListEntryUserWidget();

    UFUNCTION(BlueprintCallable)
    void OnSetSettingValue(UGGGameSettingOptionUserWidget* FromWidget);
    
    UFUNCTION(BlueprintCallable)
    void OnFavoriteCheckStateChange(bool IsChecked);
    
};

