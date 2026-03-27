#include "GGChatBeaconClient.h"
#include "Net/UnrealNetwork.h"

AGGChatBeaconClient::AGGChatBeaconClient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GivenColorIndex = -1;
    this->OnlineManager = NULL;
}

void AGGChatBeaconClient::ServerSendMessage_Implementation(const FString& UserName, const FString& Message, int32 ColorIndex) {
}
bool AGGChatBeaconClient::ServerSendMessage_Validate(const FString& UserName, const FString& Message, int32 ColorIndex) {
    return true;
}

void AGGChatBeaconClient::ClientSendMessage_Implementation(const FString& UserName, const FString& Message, int32 ColorIndex) {
}

void AGGChatBeaconClient::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGChatBeaconClient, GivenColorIndex);
}


