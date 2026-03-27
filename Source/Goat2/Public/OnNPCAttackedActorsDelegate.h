#pragma once
#include "CoreMinimal.h"
#include "OnNPCAttackedActorsDelegate.generated.h"

class AActor;
class AGGNPC;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnNPCAttackedActors, AGGNPC*, NPCAttacking, const TArray<AActor*>&, AttackedActors);

