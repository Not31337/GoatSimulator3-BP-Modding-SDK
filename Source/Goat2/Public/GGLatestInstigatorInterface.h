#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "LatestInstigator.h"
#include "GGLatestInstigatorInterface.generated.h"

class APawn;

UINTERFACE(Blueprintable)
class GOAT2_API UGGLatestInstigatorInterface : public UInterface {
    GENERATED_BODY()
};

class GOAT2_API IGGLatestInstigatorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLatestInstigator(APawn* InInstigator, FGameplayTag Interaction, float ClearAfter, bool bUnragdollReset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FLatestInstigator GetLatestInstigatorStruct() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    APawn* GetLatestInstigator(FGameplayTag& OutInteractionType) const;
    
};

