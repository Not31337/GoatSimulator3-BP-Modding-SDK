#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GGMainMenuStatics.generated.h"

UCLASS(Blueprintable, DefaultConfig, NotPlaceable, Config=Game)
class GOAT2_API UGGMainMenuStatics : public UObject {
    GENERATED_BODY()
public:
    UGGMainMenuStatics();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartMainMenuFlow(const UObject* WorldContextObject);
    
};

