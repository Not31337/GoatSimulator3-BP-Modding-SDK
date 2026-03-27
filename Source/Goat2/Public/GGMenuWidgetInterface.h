#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "GGMenuWidgetInterface.generated.h"

class UObject;

UINTERFACE(Blueprintable)
class GOAT2_API UGGMenuWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class GOAT2_API IGGMenuWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMenuObject(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetMenuTag();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetMenuObjectID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UObject* GetMenuObject();
    
};

