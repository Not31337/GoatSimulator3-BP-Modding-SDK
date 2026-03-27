#pragma once
#include "CoreMinimal.h"
#include "EPopupResponse.h"
#include "GGPopupResponseDelegateDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FourParams(FGGPopupResponseDelegate, const FString&, ID, UObject*, Object, const FString&, ButtonID, EPopupResponse, Response);

