#pragma once
#include "CoreMinimal.h"
#include "GGNamedActorNameModifier.h"
#include "GGActorName.generated.h"

USTRUCT(BlueprintType)
struct FGGActorName {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FText CurrentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OverrideName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGNamedActorNameModifier> CurrentModifiers;
    
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 NameIndex;
    
    GOAT2_API FGGActorName();
};

