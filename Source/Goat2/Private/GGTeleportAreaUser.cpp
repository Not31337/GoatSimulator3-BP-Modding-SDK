#include "GGTeleportAreaUser.h"
#include "Net/UnrealNetwork.h"

UGGTeleportAreaUser::UGGTeleportAreaUser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bTeleportAsSoonAsReady = true;
    this->bIsInsideAreaBounds = false;
    this->CachedInArea = NULL;
    this->TravelingIntoArea = NULL;
    this->TravelingFromArea = NULL;
    this->LoadingLevelsForAsset = NULL;
    this->OwningPlayerState = NULL;
    this->OwningPlayer = NULL;
}

void UGGTeleportAreaUser::SetReadyForLightingToggle(bool bReady) {
}

void UGGTeleportAreaUser::ServerTeleportPlayer_Implementation(bool bTeleportInto) {
}

void UGGTeleportAreaUser::ServerSetReadyForLightingToggle_Implementation(bool bReady) {
}

void UGGTeleportAreaUser::ServerExitTeleportArea_Implementation() {
}

void UGGTeleportAreaUser::OnStateGoatUpdated(AGGGoat* NewGoat) {
}

void UGGTeleportAreaUser::OnRep_InAreaState() {
}

void UGGTeleportAreaUser::OnGoatReplaced(AGGGoat* OldGoat, AGGGoat* NewGoat) {
}

bool UGGTeleportAreaUser::IsReadyForLightingToggle() const {
    return false;
}

bool UGGTeleportAreaUser::IsPlayerInATPArea() const {
    return false;
}

bool UGGTeleportAreaUser::IsGoatInsideAreaBounds() const {
    return false;
}

bool UGGTeleportAreaUser::IsAreaLoadedAndReadyToEnter() {
    return false;
}

bool UGGTeleportAreaUser::InTransition() const {
    return false;
}

UGGTeleportAreaUser* UGGTeleportAreaUser::GetTeleportAreaUserComponent(const AGGPlayerController* Player) {
    return NULL;
}

int32 UGGTeleportAreaUser::GetCurrentAreaSlot() const {
    return 0;
}

UGGTeleportAreaDataAsset* UGGTeleportAreaUser::GetCurrentArea() const {
    return NULL;
}

void UGGTeleportAreaUser::ExitTeleportArea() {
}

void UGGTeleportAreaUser::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGTeleportAreaUser, InAreaState);
    DOREPLIFETIME(UGGTeleportAreaUser, bIsInsideAreaBounds);
}


