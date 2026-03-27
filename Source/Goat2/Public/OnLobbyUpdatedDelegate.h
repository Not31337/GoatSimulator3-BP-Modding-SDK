#pragma once
#include "CoreMinimal.h"
#include "EGGLobbyUpdateType.h"
#include "OnLobbyUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyUpdated, TEnumAsByte<EGGLobbyUpdateType>, LobbyUpdateType);

