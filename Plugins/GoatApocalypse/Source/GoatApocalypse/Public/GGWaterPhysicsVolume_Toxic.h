#pragma once
#include "CoreMinimal.h"
#include "GGSignificanceInterface.h"
#include "GGWaterPhysicsVolume.h"
#include "Templates/SubclassOf.h"
#include "GGWaterPhysicsVolume_Toxic.generated.h"

class UGGExtraLimbComponent;
class UGGGoatGearInfoDataAsset;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API AGGWaterPhysicsVolume_Toxic : public AGGWaterPhysicsVolume, public IGGSignificanceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SignificanceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGGExtraLimbComponent> ExtraLimbCompSoftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UGGGoatGearInfoDataAsset> RadioactiveRodHornSoftInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGExtraLimbComponent> ExtraLimbComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGoatGearInfoDataAsset* RadioactiveHornsGear;
    
public:
    AGGWaterPhysicsVolume_Toxic(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

