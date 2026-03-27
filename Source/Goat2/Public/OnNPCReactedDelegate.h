#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "OnNPCReactedDelegate.generated.h"

class AActor;
class AGGNPC;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnNPCReacted, AGGNPC*, NPC, FGameplayTag, Reaction, AActor*, CausedBy, FVector, Location);

