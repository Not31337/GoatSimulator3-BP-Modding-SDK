#pragma once
#include "CoreMinimal.h"
#include "GGExternalGoatMovementInterface.h"
#include "GGGoatGear_Static_Base.h"
#include "Templates/SubclassOf.h"
#include "GGGoatGear_Static_Spooky.generated.h"

class AGGSpookyGearEffectsActor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGGoatGear_Static_Spooky : public UGGGoatGear_Static_Base, public IGGExternalGoatMovementInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalFloatSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorizontalFloatSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGSpookyGearEffectsActor> SpookyEffectsActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGSpookyGearEffectsActor* SpookyEffectsActor;
    
    UGGGoatGear_Static_Spooky(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

