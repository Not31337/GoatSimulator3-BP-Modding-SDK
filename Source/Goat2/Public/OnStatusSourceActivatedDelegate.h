#pragma once
#include "CoreMinimal.h"
#include "OnStatusSourceActivatedDelegate.generated.h"

class AActor;
class UGGStatusEffectSourceComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnStatusSourceActivated, AActor*, OwnerActor, UGGStatusEffectSourceComponent*, SourceComponent, AActor*, ActivatedBy);

