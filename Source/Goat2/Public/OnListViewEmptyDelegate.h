#pragma once
#include "CoreMinimal.h"
#include "OnListViewEmptyDelegate.generated.h"

class UGGListView;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnListViewEmpty, UGGListView*, ListView, bool, bIsEmpty);

