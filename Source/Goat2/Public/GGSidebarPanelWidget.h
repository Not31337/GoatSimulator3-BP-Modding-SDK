#pragma once
#include "CoreMinimal.h"
#include "Components/VerticalBox.h"
#include "GGSidebarPanelWidget.generated.h"

class UGGUserWidget;

UCLASS(Blueprintable)
class GOAT2_API UGGSidebarPanelWidget : public UVerticalBox {
    GENERATED_BODY()
public:
    UGGSidebarPanelWidget();

    UFUNCTION(BlueprintCallable)
    void SetChildActive(UGGUserWidget* Widget, bool bIsActive, bool bSetOtherInactive);
    
};

