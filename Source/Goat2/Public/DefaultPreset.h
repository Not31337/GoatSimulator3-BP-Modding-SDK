#pragma once
#include "CoreMinimal.h"
#include "DefaultPreset.generated.h"

USTRUCT(BlueprintType)
struct FDefaultPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> GearIDs;
    
    GOAT2_API FDefaultPreset();
};

