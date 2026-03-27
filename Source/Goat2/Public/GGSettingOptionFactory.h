#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GGSettingOption.h"
#include "GGSettingOptionFactory.generated.h"

UCLASS(Abstract, Blueprintable)
class GOAT2_API UGGSettingOptionFactory : public UObject {
    GENERATED_BODY()
public:
    UGGSettingOptionFactory();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TArray<FGGSettingOption> ConstructOptions() const;
    
};

