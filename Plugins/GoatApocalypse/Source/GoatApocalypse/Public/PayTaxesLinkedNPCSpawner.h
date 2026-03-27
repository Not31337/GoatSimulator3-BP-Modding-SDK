#pragma once
#include "CoreMinimal.h"
#include "LinkedNPCSpawner.h"
#include "PayTaxesLinkedNPCSpawner.generated.h"

USTRUCT(BlueprintType)
struct FPayTaxesLinkedNPCSpawner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinkedNPCSpawner> LinkedNPCSpawners;
    
    GOATAPOCALYPSE_API FPayTaxesLinkedNPCSpawner();
};

