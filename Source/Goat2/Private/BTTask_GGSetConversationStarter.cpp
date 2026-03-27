#include "BTTask_GGSetConversationStarter.h"

UBTTask_GGSetConversationStarter::UBTTask_GGSetConversationStarter() {
    this->NodeName = TEXT("Set Conversation Starter");
    this->StarterState = EConversationStates::CS_Greeting;
}


