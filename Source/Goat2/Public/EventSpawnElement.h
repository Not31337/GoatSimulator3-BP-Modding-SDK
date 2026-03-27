#pragma once
#include "CoreMinimal.h"
#include "EventSpawnElement.generated.h"

class AActor;
class AGGNPC;
class AGGNPCEvent;

USTRUCT(BlueprintType)
struct FEventSpawnElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AGGNPCEvent> EventClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC* StartNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* StartActor;
    
    GOAT2_API FEventSpawnElement();
};

