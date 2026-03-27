#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "GGSignificanceInterface.generated.h"

UINTERFACE(Blueprintable)
class GOAT2_API UGGSignificanceInterface : public UInterface {
    GENERATED_BODY()
};

class GOAT2_API IGGSignificanceInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LostSignificance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetSignificanceRange();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetSignificanceLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GainedSignificance();
    
};

