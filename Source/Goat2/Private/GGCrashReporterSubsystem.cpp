#include "GGCrashReporterSubsystem.h"

UGGCrashReporterSubsystem::UGGCrashReporterSubsystem() {
}

void UGGCrashReporterSubsystem::UpdateSessionInfo() {
}

void UGGCrashReporterSubsystem::UpdateAllPlayerInfos() {
}

void UGGCrashReporterSubsystem::SetPlayerInfoContext() {
}

void UGGCrashReporterSubsystem::SetGameDataInCrashReporter() {
}

void UGGCrashReporterSubsystem::OnWorldAreaChanged(AGGGoat* Goat, FGameplayTag NewArea) {
}

void UGGCrashReporterSubsystem::OnUnRagdoll(bool bRagdollOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* UnRagdolledCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void UGGCrashReporterSubsystem::OnRagdoll(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void UGGCrashReporterSubsystem::OnPlayerLoginOrLogout(APlayerController* Player) {
}

void UGGCrashReporterSubsystem::OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}

void UGGCrashReporterSubsystem::OnLobbyUpdated(const FGGLobbyMember& LobbyMember) {
}

void UGGCrashReporterSubsystem::OnLobbyJoined(bool bWasSuccessful) {
}

void UGGCrashReporterSubsystem::OnLickedChanged(AGGGoat* GoatLicking, AActor* LickedActor) {
}

void UGGCrashReporterSubsystem::OnLeftLobby() {
}

void UGGCrashReporterSubsystem::OnGoatEndPlay(AActor* GoatActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void UGGCrashReporterSubsystem::OnGoatDestroyed(AActor* GoatActor) {
}

void UGGCrashReporterSubsystem::OnGearUpdated(AGGGoat* Goat, const TArray<USceneComponent*>& CurrentGoatGear) {
}

void UGGCrashReporterSubsystem::OnCatchedStateChanged(AActor* PrimaryGoatActor, AActor* Catcher) {
}

void UGGCrashReporterSubsystem::OnAltGoatChanged(AGGGoat* Goat, UGGAlternativeGoatDataAsset* NewAltGoat) {
}

void UGGCrashReporterSubsystem::CaptureErrorEvent(UObject* WorldContextObject, const FString& Message) {
}


