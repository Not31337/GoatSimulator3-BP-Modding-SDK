#pragma once
#include "CoreMinimal.h"
#include "GGNotificationWidgetInterface.h"
#include "GGUserWidget.h"
#include "GGAreaTagUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGAreaTagUserWidget : public UGGUserWidget, public IGGNotificationWidgetInterface {
    GENERATED_BODY()
public:
    UGGAreaTagUserWidget();


    // Fix for true pure virtual functions not being implemented
};

