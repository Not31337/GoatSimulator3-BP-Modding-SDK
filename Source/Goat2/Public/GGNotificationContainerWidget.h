#pragma once
#include "CoreMinimal.h"
#include "GGNotificationUserWidget.h"
#include "Templates/SubclassOf.h"
#include "GGNotificationContainerWidget.generated.h"

class UDataTable;
class UPanelWidget;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGNotificationContainerWidget : public UGGNotificationUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WidgetClassesDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> DefaultWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* WidgetContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFillWidgetContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultClearTimerDuration;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ActiveWidget;
    
public:
    UGGNotificationContainerWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void ForceClear();
    
};

