#pragma once
#include "CoreMinimal.h"
#include "EPostProcessCameraContext.h"
#include "OnCameraContextChangedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCameraContextChanged, EPostProcessCameraContext, CameraContext, AActor*, NewTarget);

