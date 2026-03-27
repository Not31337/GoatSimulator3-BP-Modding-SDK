#pragma once
#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "GGRadarInterface.h"
#include "RadarCoordinateData.h"
#include "GGRadarPointActor.generated.h"

class UGGRadarSystem;

UCLASS(Blueprintable)
class GOAT2_API AGGRadarPointActor : public ATargetPoint, public IGGRadarInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadarCoordinateData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddRadarPointInBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRadarSystem* RadarSystem;
    
public:
    AGGRadarPointActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

