#pragma once
#include "CoreMinimal.h"
#include "GGRadarPointUserWidgetBase.h"
#include "GGCompassPointUserWidget.generated.h"

class UGGCompassDistanceTextUserWidget;
class UImage;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGCompassPointUserWidget : public UGGRadarPointUserWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* DistanceContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGCompassDistanceTextUserWidget* DistanceText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CompassImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysShowDistanceText;
    
    UGGCompassPointUserWidget();

};

