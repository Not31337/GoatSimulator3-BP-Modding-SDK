#pragma once
#include "CoreMinimal.h"
#include "NPCPatrolEntry.generated.h"

class AGGNPCPatrolGroup;

USTRUCT(BlueprintType)
struct FNPCPatrolEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetLevelGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AGGNPCPatrolGroup> PatrolGroupClass;
    
    GOAT2_API FNPCPatrolEntry();
};

