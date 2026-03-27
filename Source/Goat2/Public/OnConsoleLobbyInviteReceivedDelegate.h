#pragma once
#include "CoreMinimal.h"
#include "OnConsoleLobbyInviteReceivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnConsoleLobbyInviteReceived, const FString&, InviterName, const FString&, LobbyId);

