#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GGGoatGear_Horns_Portal_AnimInstance.generated.h"

class UGGGoatGear_Horns_Portals;

UCLASS(Abstract, Blueprintable, NonTransient)
class GEARPACK_FUTURE_API UGGGoatGear_Horns_Portal_AnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAimingLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAimingRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatGear_Horns_Portals* PortalGear;
    
    UGGGoatGear_Horns_Portal_AnimInstance();

};

