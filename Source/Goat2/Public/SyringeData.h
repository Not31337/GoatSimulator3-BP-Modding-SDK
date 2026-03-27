#pragma once
#include "CoreMinimal.h"
#include "SyringeData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSyringeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ChildBonesIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SyringeActor;
    
    GOAT2_API FSyringeData();
};

