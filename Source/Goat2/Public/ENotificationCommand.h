#pragma once
#include "CoreMinimal.h"
#include "ENotificationCommand.generated.h"

UENUM(BlueprintType)
namespace ENotificationCommand {
    enum Type {
        None,
        HideMatch,
        ClearMatch,
        HideMatchTag,
        ClearMatchTag,
        HideMatchContent,
        ClearMatchContent,
        HideActive,
        ClearActive,
        Purge,
        Custom,
    };
}

