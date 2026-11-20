#include "GGTelemetrySubsystem.h"

UGGTelemetrySubsystem::UGGTelemetrySubsystem() {
    this->bIsSessionRunning = false;
    this->SessionOrdinal = 0;
    this->LastKnownLifetimePlaytimeMinutes = 0;
    this->WorldsEnteredThisSession = 0;
}

void UGGTelemetrySubsystem::UpdateGameModeState(AGGGameState* GameState) {
}

void UGGTelemetrySubsystem::SubmitString(const ETelemetryEvent EventID, const FString& StringKey, const FString& StringData) {
}

void UGGTelemetrySubsystem::SubmitMap(const ETelemetryEvent EventID, const TMap<FString, FString>& StringFields, const TMap<FString, int32>& IntFields) {
}

void UGGTelemetrySubsystem::SubmitInt(const ETelemetryEvent EventID, const FString& IntKey, const int32& IntData) {
}

void UGGTelemetrySubsystem::SetStateString(ETelemetryState StateId, const FString& StringData) {
}

void UGGTelemetrySubsystem::SetStateInt(ETelemetryState StateId, const int32& IntData) {
}

void UGGTelemetrySubsystem::SetStateFloat(ETelemetryState StateId, const float& FloatData) {
}

void UGGTelemetrySubsystem::NotifyGameWorldStop(AGGGameState* GameState) {
}

void UGGTelemetrySubsystem::NotifyGameWorldStart(FGuid WorldId, AGGGameState* GameState) {
}

void UGGTelemetrySubsystem::HandleQuestUpdated(AGGQuestBase* Quest, FGameplayTag UpdateTag) {
}

void UGGTelemetrySubsystem::HandleLobbyLeft() {
}

void UGGTelemetrySubsystem::HandleLobbyJoined(bool bSuccess) {
}

void UGGTelemetrySubsystem::HandleLobbyCreated(bool bSuccess) {
}


