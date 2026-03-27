#pragma once
#include "CoreMinimal.h"
#include "ENPCThrowObjectType.h"
#include "Templates/SubclassOf.h"
#include "WeightedElement.h"
#include "WeightedElement_ThrowingObject.generated.h"

class AGGPhysicsActor;
class AGGPhysicsProjectile;

USTRUCT(BlueprintType)
struct FWeightedElement_ThrowingObject : public FWeightedElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENPCThrowObjectType ThrowObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSoftPointer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGPhysicsActor> PActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AGGPhysicsActor> SoftPActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGPhysicsProjectile> PhysicsProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AGGPhysicsProjectile> SoftPhysicsProjectileClass;
    
    GOAT2_API FWeightedElement_ThrowingObject();
};

