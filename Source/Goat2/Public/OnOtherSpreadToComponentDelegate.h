#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectTypes.h"
#include "OnOtherSpreadToComponentDelegate.generated.h"

class AActor;
class UGGStatusEffectSourceComponent;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnOtherSpreadToComponent, EStatusEffectTypes, SpreadType, AActor*, OwnerActor, UGGStatusEffectSourceComponent*, SourceComponent, UPrimitiveComponent*, SpreadToComponent);

