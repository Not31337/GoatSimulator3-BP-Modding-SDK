#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GGOnRepPoolingSystem.generated.h"

class UFunction;

UCLASS(Blueprintable)
class GOAT2_API UGGOnRepPoolingSystem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* OwnerObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UFunction*> PooledFuncs;
    
public:
    UGGOnRepPoolingSystem();

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetIsPoolingActive(bool ActivatePooling);
    
};

