#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GGTutorialInterface.generated.h"

UINTERFACE(Blueprintable)
class GOAT2_API UGGTutorialInterface : public UInterface {
    GENERATED_BODY()
};

class GOAT2_API IGGTutorialInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetTutorialText();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetTutorialObjectID();
    
};

