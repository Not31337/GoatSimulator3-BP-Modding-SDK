#pragma once
#include "CoreMinimal.h"
#include "OnReceivedLobbyInviteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnReceivedLobbyInvite, const FString&, InviterName, const FString&, InviteId);

