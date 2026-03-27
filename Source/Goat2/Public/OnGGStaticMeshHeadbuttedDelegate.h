#pragma once
#include "CoreMinimal.h"
#include "OnGGStaticMeshHeadbuttedDelegate.generated.h"

class AGGGoat;
class UGGStaticMeshComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGGStaticMeshHeadbutted, UGGStaticMeshComponent*, GGMeshComponent, AGGGoat*, HeadbuttingGoat);

