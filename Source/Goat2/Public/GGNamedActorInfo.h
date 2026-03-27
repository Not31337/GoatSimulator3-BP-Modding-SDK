#pragma once
#include "CoreMinimal.h"
#include "GGNamedActorNameModifier.h"
#include "GGNamedActorInfo.generated.h"

USTRUCT(BlueprintType)
struct FGGNamedActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TArray<FText> AvailableNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TArray<FGGNamedActorNameModifier> AvailableRandomModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float RandomModifierChance;
    
    GOAT2_API FGGNamedActorInfo();
};

