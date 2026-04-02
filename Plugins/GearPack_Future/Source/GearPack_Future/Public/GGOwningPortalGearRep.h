#pragma once
#include "CoreMinimal.h"
#include "GGOwningPortalGearRep.generated.h"

class UGGGoatGear_Horns_Portals;

USTRUCT(BlueprintType)
struct FGGOwningPortalGearRep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatGear_Horns_Portals* PortalGear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Index;
    
    GEARPACK_FUTURE_API FGGOwningPortalGearRep();
};

