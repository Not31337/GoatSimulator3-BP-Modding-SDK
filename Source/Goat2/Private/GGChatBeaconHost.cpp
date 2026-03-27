#include "GGChatBeaconHost.h"
#include "GGChatBeaconClient.h"

AGGChatBeaconHost::AGGChatBeaconHost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeaconTypeName = TEXT("GGChatBeaconClient");
    this->ClientBeaconActorClass = AGGChatBeaconClient::StaticClass();
    this->OnlineManager = NULL;
}


