#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGNamedActorNameModifier.generated.h"

USTRUCT(BlueprintType)
struct FGGNamedActorNameModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ModifierTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ModifierOverrideText;
    
    GOAT2_API FGGNamedActorNameModifier();
};

