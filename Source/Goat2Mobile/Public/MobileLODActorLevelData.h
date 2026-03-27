#pragma once
#include "CoreMinimal.h"
#include "MobileLODActorLevelData.generated.h"

USTRUCT(BlueprintType)
struct FMobileLODActorLevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SubActorNames;
    
    GOAT2MOBILE_API FMobileLODActorLevelData();
};

