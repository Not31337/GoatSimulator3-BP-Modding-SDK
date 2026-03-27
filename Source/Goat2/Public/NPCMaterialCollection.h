#pragma once
#include "CoreMinimal.h"
#include "NPCMaterialCollection.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FNPCMaterialCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<UMaterialInterface>> Materials;
    
    GOAT2_API FNPCMaterialCollection();
};

