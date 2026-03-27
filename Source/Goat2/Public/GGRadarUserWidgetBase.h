#pragma once
#include "CoreMinimal.h"
#include "GGUserWidget.h"
#include "MenuNavigationContext.h"
#include "NotificationWidgetClassData.h"
#include "RadarCoordinateData.h"
#include "RadarWidgetData.h"
#include "Templates/SubclassOf.h"
#include "GGRadarUserWidgetBase.generated.h"

class UGGRadarPointUserWidgetBase;
class UGGRadarSystem;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGRadarUserWidgetBase : public UGGUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* WidgetContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRadarSystem* RadarSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRadarWidgetData> RadarWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNotificationWidgetClassData> WidgetClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGRadarPointUserWidgetBase> DefaultWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WidgetRelevancy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebugInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMenuNavigationContext CachedContext;
    
public:
    UGGRadarUserWidgetBase();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdatePointWidget(FRadarCoordinateData Data);
    
    UFUNCTION(BlueprintCallable)
    void RemovePointWidget(FRadarCoordinateData Data);
    
    UFUNCTION(BlueprintCallable)
    void RefreshPointWidgets();
    
    UFUNCTION(BlueprintCallable)
    bool ClearCachedContext();
    
    UFUNCTION(BlueprintCallable)
    void AddPointWidget(FRadarCoordinateData Data);
    
};

