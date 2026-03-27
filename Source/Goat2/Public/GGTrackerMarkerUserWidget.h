#pragma once
#include "CoreMinimal.h"
#include "GGRadarPointUserWidgetBase.h"
#include "GGTrackerMarkerUserWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGTrackerMarkerUserWidget : public UGGRadarPointUserWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ObjectiveIcon;
    
    UGGTrackerMarkerUserWidget();

};

