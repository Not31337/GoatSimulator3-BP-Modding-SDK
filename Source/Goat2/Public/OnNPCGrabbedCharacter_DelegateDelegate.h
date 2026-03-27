#pragma once
#include "CoreMinimal.h"
#include "OnNPCGrabbedCharacter_DelegateDelegate.generated.h"

class AGGCharacter;
class AGGNPC;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnNPCGrabbedCharacter_Delegate, AGGNPC*, NPC, AGGCharacter*, Character);

