#pragma once
#include "CoreMinimal.h"
#include "GGGearAbility.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_Tether.generated.h"

class UPhysicsConstraintComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class GEARPACK_MAGIC_API UGGGearAbility_Tether : public UGGGearAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbilityTraceLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbilityTraceTiltAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPhysicsConstraintComponent> ConstraintComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceCapsuleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceCapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* CurrentlySelectedComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentlySelectedBone;
    
public:
    UGGGearAbility_Tether();

};

