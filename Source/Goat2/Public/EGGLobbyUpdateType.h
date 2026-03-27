#pragma once
#include "CoreMinimal.h"
#include "EGGLobbyUpdateType.generated.h"

UENUM(BlueprintType)
enum EGGLobbyUpdateType {
    GG_LUT_FinishedUpdating,
    GG_LUT_LobbyUpdateReceived,
    GG_LUT_MemberUpdateReceived,
    GG_LUT_MemberStatusReceived,
    GG_LUT_PendingDataUpdate,
};

