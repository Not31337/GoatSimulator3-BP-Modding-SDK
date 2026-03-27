#pragma once
#include "CoreMinimal.h"
#include "OnOptionHoveredDelegate.generated.h"

class UGGGameSettingOptionUserWidget;
class UGGOptionContainerUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnOptionHovered, UGGOptionContainerUserWidget*, Widget, UGGGameSettingOptionUserWidget*, Option);

