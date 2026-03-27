#pragma once
#include "CoreMinimal.h"
#include "GGLeashComponentDelegateDelegate.generated.h"

class AActor;
class UGGLeashComponent2;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGGLeashComponentDelegate, UGGLeashComponent2*, LeashComponent, AActor*, LeashedActor);

