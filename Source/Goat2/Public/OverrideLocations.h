#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OverrideLocationsParameters.h"
#include "OverrideLocations.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FOverrideLocations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SourceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SourceTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CombinedName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverrideLocationsParameters Parameters;
    
    GOAT2_API FOverrideLocations();
};

