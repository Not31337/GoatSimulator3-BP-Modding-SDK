#include "GGOnlinePartyRepresentation.h"
#include "Components/BillboardComponent.h"

AGGOnlinePartyRepresentation::AGGOnlinePartyRepresentation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GoatClassToSpawn = NULL;
    this->GoatStatusWidgetClass = NULL;
    this->PrimaryGoatStatusLocation = NULL;
    this->DelayBetweenGoatSpawns = 2.50f;
    this->bStandUpAfterLanding = true;
    this->bPauseGameAfterSpawn = false;
    this->BillboardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
}

void AGGOnlinePartyRepresentation::UpdateGoatGearRepresentation() {
}

void AGGOnlinePartyRepresentation::SetCanShowStatusWidgetComponent(bool bInCanShowStatusWidgetComp) {
}

void AGGOnlinePartyRepresentation::OnSplitscreenPlayersUpdated() {
}

void AGGOnlinePartyRepresentation::OnSplitScreenEnded() {
}

void AGGOnlinePartyRepresentation::OnSessionDestroyed(bool bWasSuccessful) {
}

void AGGOnlinePartyRepresentation::OnLobbyUpdated(TEnumAsByte<EGGLobbyUpdateType> LobbyUpdateType) {
}

void AGGOnlinePartyRepresentation::OnLobbyMemberLeft(const FGGLobbyMember& LobbyMember) {
}

void AGGOnlinePartyRepresentation::OnLeftLobby() {
}

void AGGOnlinePartyRepresentation::CreateStatusWidgetComponentForPrimaryPlayer() {
}


