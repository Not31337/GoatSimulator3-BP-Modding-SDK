#pragma once
#include "CoreMinimal.h"
#include "OnActorPreScaled_SignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActorPreScaled_Signature, bool, bIsBeingCatched);

