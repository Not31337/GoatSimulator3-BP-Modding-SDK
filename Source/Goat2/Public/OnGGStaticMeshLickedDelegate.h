#pragma once
#include "CoreMinimal.h"
#include "OnGGStaticMeshLickedDelegate.generated.h"

class AGGGoat;
class UGGStaticMeshComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGGStaticMeshLicked, UGGStaticMeshComponent*, GGMeshComponent, AGGGoat*, LickingGoat);

