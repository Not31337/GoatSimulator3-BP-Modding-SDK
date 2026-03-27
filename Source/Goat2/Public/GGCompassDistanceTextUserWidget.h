#pragma once
#include "CoreMinimal.h"
#include "GGUserWidget.h"
#include "RadarCoordinateData.h"
#include "GGCompassDistanceTextUserWidget.generated.h"

class AGGPlayerController;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGCompassDistanceTextUserWidget : public UGGUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* DistanceLabel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadarCoordinateData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerController* PC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaypointRemovalDistanceMobile;
    
public:
    UGGCompassDistanceTextUserWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateRadarData(FRadarCoordinateData InData, AGGPlayerController* InPC);
    
protected:
    UFUNCTION(BlueprintCallable)
    FText GetDistanceText();
    
};

