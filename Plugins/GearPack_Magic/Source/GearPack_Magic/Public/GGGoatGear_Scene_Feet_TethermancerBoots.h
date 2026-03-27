#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GGGoatGear_Scene_Feet.h"
#include "GGGoatGear_Scene_Feet_TethermancerBoots.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEARPACK_MAGIC_API UGGGoatGear_Scene_Feet_TethermancerBoots : public UGGGoatGear_Scene_Feet {
    GENERATED_BODY()
public:
    UGGGoatGear_Scene_Feet_TethermancerBoots(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnFoundTargetMulticast(UPrimitiveComponent* Component, FName BoneName, bool bIsFirst);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFoundTarget(UPrimitiveComponent* Component, FName BoneName, bool bIsFirst);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnFailedToFindTargetMulticast(FVector TraceEndLocation, UPrimitiveComponent* FirstSelection, FName FirstBone);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFailedToFindTarget(FVector TraceEndLocation, UPrimitiveComponent* FirstSelection, FName FirstBone);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnBrokeExistingChainMulticast(AActor* LickedActor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBrokeExistingChain(AActor* LickedActor);
    
};

