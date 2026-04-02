#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GGAnimInstance_GoatGear_Back_StickyBombs.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class GEARPACK_FUTURE_API UGGAnimInstance_GoatGear_Back_StickyBombs : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloseDelay;
    
    UGGAnimInstance_GoatGear_Back_StickyBombs();

};

