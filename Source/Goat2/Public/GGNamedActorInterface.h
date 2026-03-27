#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "GGNamedActorInterface.generated.h"

UINTERFACE(Blueprintable)
class GOAT2_API UGGNamedActorInterface : public UInterface {
    GENERATED_BODY()
};

class GOAT2_API IGGNamedActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetGoatSimName(const FText& NewName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RemoveGoatSimNameModifier(FGameplayTag ModifierTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetInteractionText();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetHasActorName();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetGoatSimName(bool WithStyling);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetFullGoatSimName(bool WithStyling);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AddGoatSimNameModifier(FGameplayTag ModifierTag, const FText& OverrideText);
    
};

