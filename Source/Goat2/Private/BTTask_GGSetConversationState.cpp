#include "BTTask_GGSetConversationState.h"

UBTTask_GGSetConversationState::UBTTask_GGSetConversationState() {
    this->NodeName = TEXT("Set Conversation State");
    this->NewState = EConversationStates::CS_None;
}


