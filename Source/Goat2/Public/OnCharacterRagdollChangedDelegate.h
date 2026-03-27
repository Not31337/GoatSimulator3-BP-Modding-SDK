#pragma once
#include "CoreMinimal.h"
#include "OnCharacterRagdollChangedDelegate.generated.h"

class AGGCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCharacterRagdollChanged, AGGCharacter*, Character, bool, NewRagdollState);

