#pragma once
#include "CoreMinimal.h"
#include "GGRadarUserWidgetBase.h"
#include "GGCompassUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGCompassUserWidget : public UGGRadarUserWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WidgetWidthLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WidgetFOVScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WidgetFadeCutoff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WidgetFadeUpdateInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyRecalculateOffsetEveryFewFrames;
    
    UGGCompassUserWidget();

};

