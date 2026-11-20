#include "GoatGameNightSubsystem.h"

UGoatGameNightSubsystem::UGoatGameNightSubsystem() {
    this->SessionManager = NULL;
    this->QRCodeCache = NULL;
}

void UGoatGameNightSubsystem::StartWebToPhysicalMode() {
}

void UGoatGameNightSubsystem::StartPhysicalToWebMode() {
}

void UGoatGameNightSubsystem::StartGameNightFlow() {
}

void UGoatGameNightSubsystem::SetWebControllerMode() {
}

void UGoatGameNightSubsystem::SetQRCodeCache(UTexture2D* NewCache) {
}

void UGoatGameNightSubsystem::SetPhysicalControllerMode() {
}

void UGoatGameNightSubsystem::SetNextStateToAllWebControllers(EControllerState State) {
}

void UGoatGameNightSubsystem::SetNextStateForVIPController(EControllerState State) {
}

void UGoatGameNightSubsystem::SetControllerScreen(int32 PlayerSlot, const FString& Route) {
}

bool UGoatGameNightSubsystem::IsUsingPhysicalController() const {
    return false;
}

bool UGoatGameNightSubsystem::HasControllerChoiceBeenMade() const {
    return false;
}

UGoatGameNightWebController* UGoatGameNightSubsystem::GetWebController(int32 PlayerSlot) {
    return NULL;
}

UGameNightSessionManager* UGoatGameNightSubsystem::GetSessionManager() const {
    return NULL;
}

float UGoatGameNightSubsystem::GetHoldDuration() const {
    return 0.0f;
}

TArray<UGoatGameNightWebController*> UGoatGameNightSubsystem::GetControllerArray() {
    return TArray<UGoatGameNightWebController*>();
}

UTexture2D* UGoatGameNightSubsystem::GetCachedQRCode() const {
    return NULL;
}

void UGoatGameNightSubsystem::EndWebToPhysicalMode(bool bUsingPhysical) {
}

void UGoatGameNightSubsystem::EndPhysicalToWebMode(bool bUsingWebController) {
}

void UGoatGameNightSubsystem::AdvertiseEnteredMainMenuForAllPlayers() {
}


