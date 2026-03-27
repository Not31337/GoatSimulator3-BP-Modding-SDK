#pragma once
#include "CoreMinimal.h"
#include "MobileLODRedirectorLevelData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FMobileLODRedirectorLevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SubActors;
    
    GOAT2MOBILE_API FMobileLODRedirectorLevelData();
};

