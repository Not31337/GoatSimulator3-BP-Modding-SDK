#pragma once
#include "CoreMinimal.h"
#include "ENPCInteractions.generated.h"

UENUM(BlueprintType)
enum class ENPCInteractions : uint8 {
    NPCI_None,
    NPCI_Discussion,
    NPCI_AngryRant,
    NPCI_MovingWave,
    NPCI_Goat_Attack,
    NPCI_Goat_CloseGreet,
    NPCI_NoticeGoat,
    NPCI_MovingNoticeGoat,
    NPCI_PettingGoat,
    NPCI_PointingAtGoat,
};

