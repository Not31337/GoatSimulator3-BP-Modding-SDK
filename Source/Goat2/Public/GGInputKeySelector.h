#pragma once
#include "CoreMinimal.h"
#include "Components/InputKeySelector.h"
#include "GGInputKeySelector.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGInputKeySelector : public UInputKeySelector {
    GENERATED_BODY()
public:
    UGGInputKeySelector();

private:
    UFUNCTION(BlueprintCallable)
    void HandleSelectingKeyChanged();
    
};

