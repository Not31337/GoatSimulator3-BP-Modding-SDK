#pragma once
#include "CoreMinimal.h"
#include "OnCharacterBounced_DelegateDelegate.generated.h"

class AGGCharacter;
class UGGBouncyStaticMeshComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCharacterBounced_Delegate, AGGCharacter*, Character, UGGBouncyStaticMeshComponent*, BouncyComponent);

