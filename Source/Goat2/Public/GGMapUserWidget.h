#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GGRadarUserWidgetBase.h"
#include "OnFogOverlayHoveredDelegate.h"
#include "RadarWidgetData.h"
#include "UnSynchronizedTowerOverlay.h"
#include "GGMapUserWidget.generated.h"

class AActor;
class UCurveFloat;
class UGGButton;
class UGGMapDetailsPanelUserWidget;
class UGGMapMarkerUserWidget;
class UGGMinimapSubsystem;
class UGGOverlayLayers;
class UGGTiledMinimapWidget;
class UImage;
class UObject;
class UOverlay;
class UPanelWidget;
class USizeBox;

UCLASS(Blueprintable, EditInlineNew, Config=Game)
class GOAT2_API UGGMapUserWidget : public UGGRadarUserWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* MapContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* MapZoomCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGOverlayLayers* WidgetLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGTiledMinimapWidget* TiledMapBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MapCanvasBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MapCrosshair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* DetailsOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGMapDetailsPanelUserWidget* MapDetailsPanelWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnSynchronizedTowerOverlay> TowerOverlays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* InfoWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HightlightedMarkerTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HightlightedMarkerToleranceMobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRadarWaypointsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkerScaleGlobal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkerScaleGlobalMobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkerScaleGlobalMobile43;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomIntervalMouseWheel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomIntervalMobilePinch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ZoomIntervalMouseWheelCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ZoomInterpSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInertialMapMovementEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxOutsideLimitsSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxOutsideLimitsMaxDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadMapSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadCurveAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadCurveDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* GamepadSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RevealAnimInitialDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RevealAnimDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadMapSpeedHighlightModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadZoomSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* GamepadZoomSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadWidgetFocusSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomMinLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomMaxLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BaseMapLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaypointPlacementDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaypointPlacementTimeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractHoldInputTimeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ZoomSoundPitchOutputRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* HoveredAreaContextActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractButtonDownTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRadarWidgetData> HighlightedMapMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D StartingMapTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D TargetMapTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CurrentScaleTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentGamepadCurveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox2D TranslationLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CachedTranslationLimitsScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MouseDownLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseDownTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastZoomAnalogValue;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFogOverlayHovered OnFogOverlayHovered;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGMapMarkerUserWidget* CurrentHighlightedMapMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvalidateNextFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDidAnalogueMovementThisFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDidAnalogueMovementLastFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGMinimapSubsystem* MinimapSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRadarWidgetData> WidgetsWaitingForReveal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGButton* TouchedButton;
    
public:
    UGGMapUserWidget();

    UFUNCTION(BlueprintCallable)
    bool UpdateWaypoint();
    
    UFUNCTION(BlueprintCallable)
    void UpdateInfoWidget(AActor* RadarActor, UGGMapMarkerUserWidget* MapMarkerUserWidget);
    
private:
    UFUNCTION(BlueprintCallable)
    bool UpdateInertialMovement(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateFogOverlays();
    
    UFUNCTION(BlueprintCallable)
    void UnfreezeMap();
    
    UFUNCTION(BlueprintCallable)
    void StopDragging();
    
    UFUNCTION(BlueprintCallable)
    void StartDragging();
    
    UFUNCTION(BlueprintCallable)
    bool ShouldPlaceWaypoint(FVector2D MousePos) const;
    
    UFUNCTION(BlueprintCallable)
    void SetZoomLevel(float Zoom);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetOverlayButtonHovered(int32 OverlayIndex, bool bHovered);
    
public:
    UFUNCTION(BlueprintCallable)
    void RevealNewMarkers();
    
    UFUNCTION(BlueprintCallable)
    void RefreshInfoWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlaceWaypointOnMapPos(FVector2D MapPos);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnOverlayButtonUnHovered();
    
    UFUNCTION(BlueprintCallable)
    void OnOverlayButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnOverlayButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnOverlayButtonMouseMoved(FVector2D ScreenSpaceTouchPosition);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMapPointNearCursor(FVector2D MapPosition, float Tolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMapPointNearCenter(FVector2D MapPosition, float Tolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMapPointNearActiveWaypoint(const FVector2D& MapPosition, float Tolerance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDragging() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UObject*> GetNewMarkerObjects();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetMapPositionFromViewportPosition(FVector2D ViewportPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetMapPositionFromContainerPosition(FVector2D MapPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGMapMarkerUserWidget* GetMapMarkerNearCursor(FVector2D MapPosition, float Tolerance);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetGamepadPositionOnMap() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentZoomLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetCurrentWidgetRenderScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetCurrentMapTranslation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetCurrentMapPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetContainerPositionFromMapPosition(FVector2D MapPosition, bool bLimitToContainer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UGGButton*> GetAllAreaButtons();
    
    UFUNCTION(BlueprintCallable)
    void FreezeMap(bool bPermanent);
    
    UFUNCTION(BlueprintCallable)
    void CenterWithContext(AActor* ContextActor, float ZoomLevel);
    
    UFUNCTION(BlueprintCallable)
    void CenterMapOnPlayer();
    
    UFUNCTION(BlueprintCallable)
    void CenterMapOnObjects(TArray<UObject*> Objects, bool bIgnoreVisibility, float ZoomLevel);
    
    UFUNCTION(BlueprintCallable)
    bool CenterMapOnObject(UObject* Object, bool bIgnoreVisibility, float ZoomLevel);
    
};

