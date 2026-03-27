#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "GGWreckableStaticActor.generated.h"

class AActor;
class AGGPhysicsActor_Base;
class UGGStaticMeshComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGWreckableStaticActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
    AGGWreckableStaticActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void HandleOnTurnedPhys(AActor* OwningActor, UGGStaticMeshComponent* GGMeshComponent, AGGPhysicsActor_Base* PhysActor);
    
};

