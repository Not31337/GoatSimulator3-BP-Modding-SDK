#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMenuNavigationType.h"
#include "MenuNavigationContext.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct GOAT2_API FMenuNavigationContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuNavigationType Type;
    
    FMenuNavigationContext();
};

