#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GGHeadbuttableObjectInterface.generated.h"

class AGGGoat;

UINTERFACE(Blueprintable)
class GOAT2_API UGGHeadbuttableObjectInterface : public UInterface {
    GENERATED_BODY()
};

class GOAT2_API IGGHeadbuttableObjectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ObjectWasHeadbutted(AGGGoat* HeadbuttingGoat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DiscardHitsAgainstOtherActorComponents(AGGGoat* HeadbuttingGoat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeHeadbutted(AGGGoat* HeadbuttingGoat);
    
};

