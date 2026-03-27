#pragma once
#include "CoreMinimal.h"
#include "ComponentToSweep.h"
#include "EUniqueOverlapType.h"
#include "GGWorldSubsystem.h"
#include "GGComponentSweepSystem.generated.h"

class AActor;
class UGGComponentSweepSystem;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class GOAT2_API UGGComponentSweepSystem : public UGGWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComponentToSweep> ComponentsToSweep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> ComponentsToRemove;
    
public:
    UGGComponentSweepSystem();

    UFUNCTION(BlueprintCallable)
    static bool RemoveComponentFromSweeping(UPrimitiveComponent* PrimComp);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOverlappingActorDestroyed(AActor* DestroyedActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    static UGGComponentSweepSystem* AddComponentToSweep_K2(UPrimitiveComponent* PrimComp, const TArray<AActor*>& IgnoredActors, EUniqueOverlapType OverlapType, bool bIgnoreOwner, bool bIgnoreNonDamageableActors, float OverlapEventTickInterval);
    
};

