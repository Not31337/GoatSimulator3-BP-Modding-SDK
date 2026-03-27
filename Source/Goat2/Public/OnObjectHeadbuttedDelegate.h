#pragma once
#include "CoreMinimal.h"
#include "OnObjectHeadbuttedDelegate.generated.h"

class AGGGoat;
class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnObjectHeadbutted, UObject*, HeadbuttedObject, AGGGoat*, HeadbuttingGoat);

