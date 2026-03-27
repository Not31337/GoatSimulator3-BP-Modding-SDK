#pragma once
#include "CoreMinimal.h"
#include "ETopBarButtonVisibility.h"
#include "OnShouldCreateTopBarMenuItemDelegate.generated.h"

class UGGMenuDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(ETopBarButtonVisibility, FOnShouldCreateTopBarMenuItem, UGGMenuDataAsset*, MenuData);

