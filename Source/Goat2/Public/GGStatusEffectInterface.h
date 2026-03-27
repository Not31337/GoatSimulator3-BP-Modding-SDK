#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EApplicationMethod.h"
#include "EStatusEffectTypes.h"
#include "Templates/SubclassOf.h"
#include "GGStatusEffectInterface.generated.h"

class AActor;
class AGGStatusEffectBase;
class UGGStatusEffectManager;

UINTERFACE(Blueprintable)
class GOAT2_API UGGStatusEffectInterface : public UInterface {
    GENERATED_BODY()
};

class GOAT2_API IGGStatusEffectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RemoveStatusEffect(EStatusEffectTypes TypeToRemove);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasStatusEffectByType(EStatusEffectTypes TypeToCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasStatusEffectByClass(TSubclassOf<AGGStatusEffectBase> StatusEffectClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UGGStatusEffectManager* GetStatusEffectManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ClearStatusEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AGGStatusEffectBase* ApplyStatusEffect(EStatusEffectTypes TypeToApply, EApplicationMethod ApplicationMethod, AActor* SpreadFrom, TSubclassOf<AGGStatusEffectBase> StatusEffectClass, AGGStatusEffectBase* SpreadFromStatus);
    
};

