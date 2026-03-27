#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "GGDestructibleInfo.h"
#include "ImpulseDamageEvent.h"
#include "GGDestructibleInterface.generated.h"

class AActor;
class UMaterialInterface;

UINTERFACE(Blueprintable)
class GOAT2_API UGGDestructibleInterface : public UInterface {
    GENERATED_BODY()
};

class GOAT2_API IGGDestructibleInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDestructibleDestroyed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDamageEnoughForDestruction(float Damage, const FImpulseDamageEvent& DamageEvent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TMap<UMaterialInterface*, UMaterialInterface*> GetShardMaterialOverride();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGGDestructibleInfo GetDestructibleInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DestroyAsDestructible(FVector Impulse, AActor* DestructionCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeDestroyedAsDestructible();
    
};

