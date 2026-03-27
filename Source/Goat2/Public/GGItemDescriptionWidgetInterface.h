#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GGItemDescriptionWidgetInterface.generated.h"

UINTERFACE(Blueprintable)
class GOAT2_API UGGItemDescriptionWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class GOAT2_API IGGItemDescriptionWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDescription(const FText& Text);
    
};

