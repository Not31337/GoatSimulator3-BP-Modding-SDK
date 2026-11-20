#pragma once
#include "CoreMinimal.h"
#include "OnGameNightUpdateInteractableDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameNightUpdateInteractable, UObject*, InteractableObject);

