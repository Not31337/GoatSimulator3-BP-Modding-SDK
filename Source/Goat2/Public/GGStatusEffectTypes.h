#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EStatusEffectTypes.h"
#include "GGStatusEffectTypes.generated.h"

class AActor;

UCLASS(Blueprintable)
class GOAT2_API UGGStatusEffectTypes : public UObject {
    GENERATED_BODY()
public:
    UGGStatusEffectTypes();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasStatusInterfaceOrIsSource(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanBeAffectedByStatusEffects(AActor* Actor, EStatusEffectTypes TypeToCheck);
    
};

