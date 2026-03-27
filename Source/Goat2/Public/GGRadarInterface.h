#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "RadarCoordinateData.h"
#include "GGRadarInterface.generated.h"

class AActor;
class AGGGoatTower;
class UTexture2D;

UINTERFACE(Blueprintable)
class GOAT2_API UGGRadarInterface : public UInterface {
    GENERATED_BODY()
};

class GOAT2_API IGGRadarInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsRelevantForRadar();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UTexture2D* GetRadarIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetRadarDisplayName();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FRadarCoordinateData GetRadarData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AGGGoatTower* GetMatchingGoatTower();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* GetMatchingAreaContextActor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetActorLocationOffset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeShownOnRadar();
    
};

