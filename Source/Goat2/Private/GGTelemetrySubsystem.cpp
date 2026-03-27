#include "GGTelemetrySubsystem.h"

UGGTelemetrySubsystem::UGGTelemetrySubsystem() {
    this->bIsSessionRunning = false;
}

void UGGTelemetrySubsystem::UpdateGameModeState(AGGGameState* GameState) {
}

void UGGTelemetrySubsystem::SubmitString(const ETelemetryEvent EventID, const FString& StringKey, const FString& StringData) {
}

bool UGGTelemetrySubsystem::SubmitJSONObject(const ETelemetryEvent EventID, const UObject* JsonObject) {
    return false;
}

void UGGTelemetrySubsystem::SubmitInt(const ETelemetryEvent EventID, const FString& IntKey, const int32& IntData) {
}

void UGGTelemetrySubsystem::SetStateString(ETelemetryState StateId, const FString& StringData) {
}

bool UGGTelemetrySubsystem::SetStateJSONObject(ETelemetryState StateId, const UObject* JsonObject) {
    return false;
}

void UGGTelemetrySubsystem::SetStateInt(ETelemetryState StateId, const int32& IntData) {
}

void UGGTelemetrySubsystem::NotifyGameWorldStop(AGGGameState* GameState) {
}

void UGGTelemetrySubsystem::NotifyGameWorldStart(FGuid WorldId, AGGGameState* GameState) {
}


