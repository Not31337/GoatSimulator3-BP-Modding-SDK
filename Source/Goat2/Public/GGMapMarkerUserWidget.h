#pragma once
#include "CoreMinimal.h"
#include "GGRadarPointUserWidgetBase.h"
#include "GGMapMarkerUserWidget.generated.h"

class UImage;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGMapMarkerUserWidget : public UGGRadarPointUserWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MarkerDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetailsPanelOffsetY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanTeleport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MapMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MapMarkerBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* HoverAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* RevealAnim;
    
    UGGMapMarkerUserWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnMarkerInteractedWith(bool bHold);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetMarkerDescription();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetCurrentWaypointHint();
    
};

