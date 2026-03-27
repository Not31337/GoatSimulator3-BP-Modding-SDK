#pragma once
#include "CoreMinimal.h"
#include "OnOfferUpdatedDelegate.generated.h"

class UGGDLCShopEntryUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOfferUpdated, UGGDLCShopEntryUserWidget*, Widget);

