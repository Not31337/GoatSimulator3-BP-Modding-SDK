#pragma once
#include "CoreMinimal.h"
#include "EMenuRequest.generated.h"

UENUM(BlueprintType)
namespace EMenuRequest {
    enum Type {
        Toggle,
        Show,
        Hide,
        Replace,
    };
}

