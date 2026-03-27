#pragma once
#include "CoreMinimal.h"
#include "OnActorReleased_SignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActorReleased_Signature, AActor*, CatchedActor, AActor*, Catcher);

