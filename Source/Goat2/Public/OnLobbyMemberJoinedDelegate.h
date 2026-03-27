#pragma once
#include "CoreMinimal.h"
#include "GGLobbyMember.h"
#include "OnLobbyMemberJoinedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyMemberJoined, const FGGLobbyMember&, LobbyMember);

