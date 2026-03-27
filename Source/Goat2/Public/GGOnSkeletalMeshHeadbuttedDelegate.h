#pragma once
#include "CoreMinimal.h"
#include "GGOnSkeletalMeshHeadbuttedDelegate.generated.h"

class AGGGoat;
class UGGSkeletalMeshComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGGOnSkeletalMeshHeadbutted, UGGSkeletalMeshComponent*, GGMeshComponent, AGGGoat*, HeadbuttingGoat);

