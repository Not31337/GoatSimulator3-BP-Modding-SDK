#pragma once
#include "CoreMinimal.h"
#include "GGLobbyMember.h"
#include "OnLobbyMemberLeftDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyMemberLeft, const FGGLobbyMember&, LobbyMember);

