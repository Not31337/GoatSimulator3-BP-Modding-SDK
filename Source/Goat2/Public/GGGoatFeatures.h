#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GGGoatFeatures.generated.h"

UCLASS(Blueprintable, Config=GoatFeatures)
class GOAT2_API UGGGoatFeatures : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> EnabledFeatures;
    
public:
    UGGGoatFeatures();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFeatureEnabled(const FName FeatureName);
    
};

