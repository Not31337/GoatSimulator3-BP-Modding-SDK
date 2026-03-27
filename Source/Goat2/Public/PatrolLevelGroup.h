#pragma once
#include "CoreMinimal.h"
#include "PatrolLevelGroup.generated.h"

USTRUCT(BlueprintType)
struct FPatrolLevelGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Maps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ConfigAssetPath;
    
    GOAT2_API FPatrolLevelGroup();
};

