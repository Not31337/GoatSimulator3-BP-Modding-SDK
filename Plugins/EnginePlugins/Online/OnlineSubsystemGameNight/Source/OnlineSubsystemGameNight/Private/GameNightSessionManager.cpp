#include "GameNightSessionManager.h"

UGameNightSessionManager::UGameNightSessionManager() {
}

FString UGameNightSessionManager::GetSessionURL() const {
    return TEXT("");
}

FString UGameNightSessionManager::GetSessionConnectURL() const {
    return TEXT("");
}

FString UGameNightSessionManager::GetSessionCode() const {
    return TEXT("");
}

int32 UGameNightSessionManager::GetMaxPlayerCount() const {
    return 0;
}

bool UGameNightSessionManager::GetIsVIPSlot(int32 PlayerSlot) const {
    return false;
}

float UGameNightSessionManager::GetControllerTimeoutTime() const {
    return 0.0f;
}


