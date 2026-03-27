#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MissingNPCsInArea.generated.h"

USTRUCT(BlueprintType)
struct FMissingNPCsInArea {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Area;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MissingCivilianCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MissingEnvironmentalCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MissingProfessionalCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MissingAnimalCount;
    
    GOAT2_API FMissingNPCsInArea();
};

