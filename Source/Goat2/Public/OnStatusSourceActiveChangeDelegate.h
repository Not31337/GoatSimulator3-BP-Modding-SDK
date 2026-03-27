#pragma once
#include "CoreMinimal.h"
#include "OnStatusSourceActiveChangeDelegate.generated.h"

class AActor;
class UGGStatusEffectSourceComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnStatusSourceActiveChange, AActor*, OwnerActor, UGGStatusEffectSourceComponent*, SourceComponent, bool, bNewActive, AActor*, ActivatedBy);

