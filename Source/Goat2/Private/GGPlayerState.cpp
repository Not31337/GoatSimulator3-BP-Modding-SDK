#include "GGPlayerState.h"
#include "Net/UnrealNetwork.h"

AGGPlayerState::AGGPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentGoatTower = NULL;
    this->bShouldHideNameplate = false;
    this->PlayerColor = -1;
    this->PlayerGoat = NULL;
    this->ServerIndex = 0;
}

void AGGPlayerState::SetPlayerScore(const float NewScore) {
}

void AGGPlayerState::SetPlayerGoat(AGGGoat* Goat) {
}

void AGGPlayerState::SetNameplateHidden(bool bShouldBeHidden) {
}

void AGGPlayerState::ServerRequestPlayerColor_Implementation(int32 ColorIndex, int32 BackupColorIndex) {
}
bool AGGPlayerState::ServerRequestPlayerColor_Validate(int32 ColorIndex, int32 BackupColorIndex) {
    return true;
}

void AGGPlayerState::RequestPlayerColor(int32 ColorIndex, int32 BackupColorIndex) {
}

void AGGPlayerState::OnRep_ShouldHideNameplate() {
}

void AGGPlayerState::OnRep_PlayerGoat() {
}

void AGGPlayerState::OnRep_PlayerColor() {
}

bool AGGPlayerState::IsHost() {
    return false;
}

UGGTeleportAreaUser* AGGPlayerState::GetTeleportAreaUser() {
    return NULL;
}

FText AGGPlayerState::GetSteamIDWatermarkTextDebug() {
    return FText::GetEmpty();
}

FText AGGPlayerState::GetSteamIDWatermarkText() {
    return FText::GetEmpty();
}

bool AGGPlayerState::GetShouldHideNameplate() const {
    return false;
}

int32 AGGPlayerState::GetServerIndex() const {
    return 0;
}

float AGGPlayerState::GetPlayerScore() const {
    return 0.0f;
}

AGGGoat* AGGPlayerState::GetPlayerGoat() const {
    return NULL;
}

AGGPlayerController* AGGPlayerState::GetPlayerController() const {
    return NULL;
}

int32 AGGPlayerState::GetPlayerColorIndex() const {
    return 0;
}

FLinearColor AGGPlayerState::GetPlayerColor() const {
    return FLinearColor{};
}

void AGGPlayerState::BroadcastOnCreatedWhenReady() {
}

void AGGPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGPlayerState, LastKnownServerLocation);
    DOREPLIFETIME(AGGPlayerState, CurrentGoatTower);
    DOREPLIFETIME(AGGPlayerState, bShouldHideNameplate);
    DOREPLIFETIME(AGGPlayerState, PlayerColor);
    DOREPLIFETIME(AGGPlayerState, PlayerGoat);
    DOREPLIFETIME(AGGPlayerState, ServerIndex);
}


