#pragma once
#include "CoreMinimal.h"
#include "OnActorCatched_SignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActorCatched_Signature, AActor*, CatchedActor, AActor*, Catcher);

