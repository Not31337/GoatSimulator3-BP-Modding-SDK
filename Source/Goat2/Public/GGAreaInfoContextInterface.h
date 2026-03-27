#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GGAreaInfoContextInterface.generated.h"

UINTERFACE(Blueprintable)
class GOAT2_API UGGAreaInfoContextInterface : public UInterface {
    GENERATED_BODY()
};

class GOAT2_API IGGAreaInfoContextInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldShowMapAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MarkMapAnimAsShown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAreaInfoRevealed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetContextActorIdentifier();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetAreaName();
    
};

