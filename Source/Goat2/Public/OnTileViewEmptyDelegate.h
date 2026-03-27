#pragma once
#include "CoreMinimal.h"
#include "OnTileViewEmptyDelegate.generated.h"

class UGGTileView;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTileViewEmpty, UGGTileView*, TileView, bool, bIsEmpty);

