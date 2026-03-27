#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NPCGroupElement.h"
#include "NPCGroup.generated.h"

USTRUCT(BlueprintType)
struct FNPCGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNPCGroupElement> NPCElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> StandLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> OpenStandLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LookAtLocation;
    
    GOAT2_API FNPCGroup();
};

