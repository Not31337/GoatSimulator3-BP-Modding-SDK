#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GGGrindableInterface.generated.h"

class AActor;
class UGGGrindableSplineDataAsset;

UINTERFACE(Blueprintable)
class GOAT2_API UGGGrindableInterface : public UInterface {
    GENERATED_BODY()
};

class GOAT2_API IGGGrindableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UGGGrindableSplineDataAsset* GetGrindableDataAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<TSoftObjectPtr<AActor>> GetActorsToIgnoreWhileGrinding() const;
    
};

