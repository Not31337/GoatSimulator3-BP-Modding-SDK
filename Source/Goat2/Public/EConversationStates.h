#pragma once
#include "CoreMinimal.h"
#include "EConversationStates.generated.h"

UENUM(BlueprintType)
enum class EConversationStates : uint8 {
    CS_None,
    CS_SayVoiceline,
    CS_Wait,
    CS_Greeting,
    CS_GreetingResponse,
    CS_Farewell,
    CS_FarewellResponse,
};

