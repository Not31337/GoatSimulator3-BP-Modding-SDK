#pragma once
#include "CoreMinimal.h"
#include "GGPhysicsProjectile.h"
#include "GGBlowdryer.generated.h"

class UAbilitySystemComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGBlowdryer : public AGGPhysicsProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HairChangeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveAccessoriesOnHairChange;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* AbilityComponent;
    
public:
    AGGBlowdryer(const FObjectInitializer& ObjectInitializer);

};

