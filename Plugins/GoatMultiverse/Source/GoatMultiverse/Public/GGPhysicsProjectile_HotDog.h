#pragma once
#include "CoreMinimal.h"
#include "GGPhysicsActor.h"
#include "Templates/SubclassOf.h"
#include "GGPhysicsProjectile_HotDog.generated.h"

class AGGBouncableHotDog;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGPhysicsProjectile_HotDog : public AGGPhysicsActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGBouncableHotDog> BouncyHotDogClass;
    
public:
    AGGPhysicsProjectile_HotDog(const FObjectInitializer& ObjectInitializer);

};

