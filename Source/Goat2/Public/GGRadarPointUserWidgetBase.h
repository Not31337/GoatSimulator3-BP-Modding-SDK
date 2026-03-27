#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GGUserWidget.h"
#include "RadarCoordinateData.h"
#include "GGRadarPointUserWidgetBase.generated.h"

class UCurveFloat;
class UGGRadarSystem;
class UGGRadarUserWidgetBase;
class UImage;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGRadarPointUserWidgetBase : public UGGUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WidgetRelevancy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* WaypointPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* WaypointImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRadarSystem* RadarSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActorLocationUpdateInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDistanceFadeEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEdgeFadeEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FadeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeFallbackDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeUpdateInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScaleWithZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDistanceScaleCurveEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bThroneRoomOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeHighlighted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBecomeWaypoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MapPosOffsetMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* RenderOffsetCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaypointMaxHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveWaypointMinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveWaypointMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConsiderHeightDifferenceForOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerHeightDifferenceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRadarUserWidgetBase* OwningWidget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadarCoordinateData CachedData;
    
public:
    UGGRadarPointUserWidgetBase();

    UFUNCTION(BlueprintCallable)
    void UpdateWidget(const FRadarCoordinateData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateDistance(float Distance);
    
    UFUNCTION(BlueprintCallable)
    void TickWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldScaleWithMapZoom();
    
    UFUNCTION(BlueprintCallable)
    void SetOwningWidget(UGGRadarUserWidgetBase* InOwningWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdatedWidget(const FRadarCoordinateData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowAsWaypoint(bool bIsWaypoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAddedWidget(const FRadarCoordinateData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPointVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetWidgetVisibilityDebugString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRadarCoordinateData GetCachedData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetActorRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetActorLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEverBecomeWaypoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanBecomeWaypoint();
    
    UFUNCTION(BlueprintCallable)
    void AddedWidget(const FRadarCoordinateData& Data);
    
};

