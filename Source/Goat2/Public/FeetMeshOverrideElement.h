#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FeetMeshElement.h"
#include "FeetMeshOverrideElement.generated.h"

USTRUCT(BlueprintType)
struct FFeetMeshOverrideElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AltGoatTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TagString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFeetMeshElement> FeetMeshes;
    
    GOAT2_API FFeetMeshOverrideElement();
};

