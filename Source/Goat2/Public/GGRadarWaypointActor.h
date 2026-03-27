#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGRadarInterface.h"
#include "RadarCoordinateData.h"
#include "GGRadarWaypointActor.generated.h"

class AGGPlayerState;
class UGGRadarSystem;

UCLASS(Blueprintable)
class GOAT2_API AGGRadarWaypointActor : public AActor, public IGGRadarInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadarCoordinateData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRadarSystem* RadarSystem;
    
public:
    AGGRadarWaypointActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWaypointUpdate(AGGPlayerState* WaypointOwner);
    
    UFUNCTION(BlueprintCallable)
    void OnWaypointDataChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRadarVisibilityRulesModified();
    

    // Fix for true pure virtual functions not being implemented
};

