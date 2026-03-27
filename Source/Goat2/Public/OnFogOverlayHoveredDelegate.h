#pragma once
#include "CoreMinimal.h"
#include "OnFogOverlayHoveredDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFogOverlayHovered, AActor*, GoatTower);

