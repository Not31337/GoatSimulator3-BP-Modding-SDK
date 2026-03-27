#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OverrideLocationsParameters.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FOverrideLocationsParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Locations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> TrackedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutomaticallyRemoveAfterDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAffectSignificance;
    
    GOAT2_API FOverrideLocationsParameters();
};

