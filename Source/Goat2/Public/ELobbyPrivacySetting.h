#pragma once
#include "CoreMinimal.h"
#include "ELobbyPrivacySetting.generated.h"

UENUM(BlueprintType)
enum ELobbyPrivacySetting {
    LPS_Open,
    LPS_InviteOnly,
    LPS_Friends,
    LPS_FriendsOfFriends,
};

