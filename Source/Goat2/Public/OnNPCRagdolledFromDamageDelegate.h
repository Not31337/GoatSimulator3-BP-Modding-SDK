#pragma once
#include "CoreMinimal.h"
#include "OnNPCRagdolledFromDamageDelegate.generated.h"

class AActor;
class AGGNPC;
class UDamageType;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnNPCRagdolledFromDamage, AGGNPC*, NPC, const UDamageType*, DamageType, AActor*, DamageCauser, bool, bWasAlreadyRagdolled);

