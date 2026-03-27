#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "ImpulseDamageEvent.h"
#include "GGMeshComponentInterface.generated.h"

class AActor;
class AController;
class AGGPhysicsActor_Base;

UINTERFACE(Blueprintable)
class GOAT2_API UGGMeshComponentInterface : public UInterface {
    GENERATED_BODY()
};

class GOAT2_API IGGMeshComponentInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldDisplayNameOnRepel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ComponentTakeDamage(float DamageAmount, const FImpulseDamageEvent& ImpulseDamageEvent, AController* EventInstigator, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBecomePActorByGoatRagdoll();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AGGPhysicsActor_Base* BecomePhysicsActor(FVector Impulse);
    
};

