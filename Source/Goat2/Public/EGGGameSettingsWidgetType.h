#pragma once
#include "CoreMinimal.h"
#include "EGGGameSettingsWidgetType.generated.h"

UENUM(BlueprintType)
enum class EGGGameSettingsWidgetType : uint8 {
    Bool,
    Float,
    Integer,
    Integer_DropDown,
    Button,
    CustomClass,
};

