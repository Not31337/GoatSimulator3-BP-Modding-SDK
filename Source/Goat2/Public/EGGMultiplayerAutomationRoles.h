#pragma once
#include "CoreMinimal.h"
#include "EGGMultiplayerAutomationRoles.generated.h"

UENUM(BlueprintType)
namespace EGGMultiplayerAutomationRoles {
    enum Type {
        Server,
        Client,
        ServerAndClient,
        MaxPlayers = 4,
    };
}

