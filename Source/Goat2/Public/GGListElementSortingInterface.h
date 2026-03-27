#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "GGListElementSortingInterface.generated.h"

class UObject;

UINTERFACE(Blueprintable)
class GOAT2_API UGGListElementSortingInterface : public UInterface {
    GENERATED_BODY()
};

class GOAT2_API IGGListElementSortingInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Sort(UObject* InObjA, UObject* InObjB, FGameplayTag InSortingTag, UObject* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Filter(UObject* InObj, FGameplayTag InFilterTag);
    
};

