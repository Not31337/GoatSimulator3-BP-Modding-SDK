#pragma once
#include "CoreMinimal.h"
#include "PerPlatformProperties.h"
#include "GGInstinct.h"
#include "PortedNPC.h"
#include "GGInstinct_Portals.generated.h"

class AActor;
class AGGGoat;

UCLASS(Blueprintable)
class GEARPACK_FUTURE_API AGGInstinct_Portals : public AGGInstinct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformFloat AirTimeForInstinct;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPortedNPC> PortedNPCs;
    
public:
    AGGInstinct_Portals(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnActorPorted(AActor* Actor, AGGGoat* GoatOwner);
    
};

