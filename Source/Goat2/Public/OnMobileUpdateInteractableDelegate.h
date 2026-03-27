#pragma once
#include "CoreMinimal.h"
#include "OnMobileUpdateInteractableDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMobileUpdateInteractable, UObject*, InteractableObject);

