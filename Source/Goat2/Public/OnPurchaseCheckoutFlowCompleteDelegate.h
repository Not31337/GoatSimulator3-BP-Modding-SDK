#pragma once
#include "CoreMinimal.h"
#include "EGoatDLC.h"
#include "OnPurchaseCheckoutFlowCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPurchaseCheckoutFlowComplete, bool, bSucceeded, const TArray<EGoatDLC>&, DLCs, const TArray<FString>&, OfferIDs);

