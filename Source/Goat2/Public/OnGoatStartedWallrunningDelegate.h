#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnGoatStartedWallrunningDelegate.generated.h"

class AActor;
class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnGoatStartedWallrunning, AGGGoat*, GoatWallrunning, AActor*, WallWallrunnedOn, FVector, WallrunNormal, FVector, WallrunLocation);

