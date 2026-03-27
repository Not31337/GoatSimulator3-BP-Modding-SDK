#pragma once
#include "CoreMinimal.h"
#include "LinkedNPCSpawner.generated.h"

class AGGNPCSpawner;

USTRUCT(BlueprintType)
struct FLinkedNPCSpawner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AGGNPCSpawner> NPCSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnOnEnable;
    
    GOATAPOCALYPSE_API FLinkedNPCSpawner();
};

