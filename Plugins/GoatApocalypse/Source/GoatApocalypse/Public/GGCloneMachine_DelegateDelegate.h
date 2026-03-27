#pragma once
#include "CoreMinimal.h"
#include "GGCloneMachine_DelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGGCloneMachine_Delegate, AActor*, Original, AActor*, Clone);

