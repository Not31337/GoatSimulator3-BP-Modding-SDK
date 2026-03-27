#pragma once
#include "CoreMinimal.h"
#include "GGNotificationContainerWidget.h"
#include "GGNotificationMultiWidget.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGNotificationMultiWidget : public UGGNotificationContainerWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportMultipleWidgetsInContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MultipleWidgetMaxAmount;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> ActiveWidgets;
    
public:
    UGGNotificationMultiWidget();

};

