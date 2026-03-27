#pragma once
#include "CoreMinimal.h"
#include "GGNotificationWidgetInterface.h"
#include "GGUserWidget.h"
#include "GGPlayerGameSplashUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGPlayerGameSplashUserWidget : public UGGUserWidget, public IGGNotificationWidgetInterface {
    GENERATED_BODY()
public:
    UGGPlayerGameSplashUserWidget();


    // Fix for true pure virtual functions not being implemented
};

