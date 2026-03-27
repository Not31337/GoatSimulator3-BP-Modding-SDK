#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GGRadarUserWidgetBase.h"
#include "TrackerMarkerOffsetScale.h"
#include "GGTrackerUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGTrackerUserWidget : public UGGRadarUserWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTrackerMarkerOffsetScale> OffsetScales;
    
    UGGTrackerUserWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetOffsetScaleForTag(FGameplayTag InTag);
    
};

