#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGHeadbuttableObjectInterface.h"
#include "GGNamedActorInterface.h"
#include "Templates/SubclassOf.h"
#include "GGAntiGravityFieldActor.generated.h"

class AGGStatusEffectBase;
class USceneComponent;
class USphereComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GEARPACK_FUTURE_API AGGAntiGravityFieldActor : public AActor, public IGGHeadbuttableObjectInterface, public IGGNamedActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGStatusEffectBase> StatusEffectToApply;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ActorName;
    
    AGGAntiGravityFieldActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

