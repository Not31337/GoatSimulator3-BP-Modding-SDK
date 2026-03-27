#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "GGUserWidget.h"
#include "GGDLCShopCategoryHeaderWidget.generated.h"

class UPanelWidget;
class UTextBlock;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGDLCShopCategoryHeaderWidget : public UGGUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CategoryTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* AssociatedPanel;
    
    UGGDLCShopCategoryHeaderWidget();

    UFUNCTION(BlueprintCallable)
    void OnOffersUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetWidgetToFocusNavigation(UWidget* PreviousFocus, EUINavigation Direction);
    
};

