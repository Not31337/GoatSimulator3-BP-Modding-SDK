#pragma once
#include "CoreMinimal.h"
#include "OnPhysStateChangedDelegate.generated.h"

class USkeletalMeshComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPhysStateChanged, USkeletalMeshComponent*, Component, bool, bCreated);

