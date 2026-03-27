#include "GGSplitScreenSubsystem.h"

UGGSplitScreenSubsystem::UGGSplitScreenSubsystem() {
    this->PlayerInputHeldDuration = 1.00f;
}

void UGGSplitScreenSubsystem::StopSplitScreen() {
}

bool UGGSplitScreenSubsystem::SplitscreenControllerIDExists(int32 ControlledID) const {
    return false;
}

bool UGGSplitScreenSubsystem::SlateControllerIdExists(int32 SlateUserIndex) const {
    return false;
}

void UGGSplitScreenSubsystem::SetShouldListenForLeaving(bool bShouldListen) {
}

void UGGSplitScreenSubsystem::SetShouldListenForJoining(bool bShouldListen) {
}

void UGGSplitScreenSubsystem::RemoveOnePlayerById(int32 ControllerId) {
}

void UGGSplitScreenSubsystem::RemoveOnePlayer(APlayerController* PlayerController) {
}

void UGGSplitScreenSubsystem::PostLoadMapWithWorld(UWorld* World) {
}

void UGGSplitScreenSubsystem::OnUserRegistered(int32 UserIndex) {
}

void UGGSplitScreenSubsystem::OnSwitchDockedChanged(bool IsDocked) {
}

void UGGSplitScreenSubsystem::OnSessionDestroyed(bool bSuccess) {
}

void UGGSplitScreenSubsystem::OnControllerPairingChange(int32 ControllerIndex, int32 NewUserPlatformId, int32 OldUserPlatformId) {
}

void UGGSplitScreenSubsystem::OnControllerConnectionChange(bool bConnected, int32 UserId, int32 ControllerId) {
}

float UGGSplitScreenSubsystem::IsUserLeaving() const {
    return 0.0f;
}

bool UGGSplitScreenSubsystem::IsUserJoining() const {
    return false;
}

bool UGGSplitScreenSubsystem::IsSplitScreenActive() const {
    return false;
}

bool UGGSplitScreenSubsystem::IsGamepadConnected(int32 GamepadIndex) {
    return false;
}

bool UGGSplitScreenSubsystem::IsGamepadClaimed(int32 GamepadIndex) const {
    return false;
}

bool UGGSplitScreenSubsystem::IsGamepadAvailableForPlayerIndex(int32 PlayerIndex) const {
    return false;
}

bool UGGSplitScreenSubsystem::IsAwaitingSplitScreen() const {
    return false;
}

bool UGGSplitScreenSubsystem::IsAnyGamepadConnected() const {
    return false;
}

bool UGGSplitScreenSubsystem::HasMouseAndKeyboardAvailable() const {
    return false;
}

float UGGSplitScreenSubsystem::GetUserHeldLeavingDuration(int32 UserIndex) {
    return 0.0f;
}

float UGGSplitScreenSubsystem::GetUserHeldJoiningDuration(int32 UserIndex) {
    return 0.0f;
}

TArray<USplitScreenPlayerObject*> UGGSplitScreenSubsystem::GetSplitScreenPlayerObjects(UObject* Owner) {
    return TArray<USplitScreenPlayerObject*>();
}

int32 UGGSplitScreenSubsystem::GetSplitScreenPlayerNum() const {
    return 0;
}

TArray<FSplitScreenPlayerData> UGGSplitScreenSubsystem::GetSplitScreenPlayerData() {
    return TArray<FSplitScreenPlayerData>();
}

int32 UGGSplitScreenSubsystem::GetNumOpenSplitScreenSlots() const {
    return 0;
}

int32 UGGSplitScreenSubsystem::GetNumberOfConnectedGamepads() const {
    return 0;
}

int32 UGGSplitScreenSubsystem::GetNextSplitScreenIndex() const {
    return 0;
}

TArray<UGGLocalPlayer*> UGGSplitScreenSubsystem::GetGGLocalPlayers() const {
    return TArray<UGGLocalPlayer*>();
}

UGGLocalPlayer* UGGSplitScreenSubsystem::GetGGLocalPlayer(int32 ControllerId) const {
    return NULL;
}

TArray<FGamepad> UGGSplitScreenSubsystem::GetGamepads() const {
    return TArray<FGamepad>();
}

int32 UGGSplitScreenSubsystem::GetGamepadClaimedByUser(int32 UserIndex) const {
    return 0;
}

ECanStartSplitScreenResult UGGSplitScreenSubsystem::CanStartSplitScreen(bool bCanLogAndPrint) const {
    return ECanStartSplitScreenResult::Yes;
}

bool UGGSplitScreenSubsystem::CanListenForLeaving() const {
    return false;
}

bool UGGSplitScreenSubsystem::CanListenForJoining() const {
    return false;
}

UGGLocalPlayer* UGGSplitScreenSubsystem::AddOnePlayer(int32 UserIndex, bool bSpawnPawn, int32 ClaimGamepadIndex) {
    return NULL;
}


