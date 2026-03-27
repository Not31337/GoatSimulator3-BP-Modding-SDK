#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "NotificationWidgetClassData.h"
#include "GGRadarWidgetClassCollectionDataAsset.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGRadarWidgetClassCollectionDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNotificationWidgetClassData> CompassWidgetClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNotificationWidgetClassData> MapWidgetClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNotificationWidgetClassData> TrackerWidgetClasses;
    
    UGGRadarWidgetClassCollectionDataAsset();

};

