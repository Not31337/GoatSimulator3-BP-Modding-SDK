#include "PlayerGamePlayerInfoFunctionLibrary.h"

UPlayerGamePlayerInfoFunctionLibrary::UPlayerGamePlayerInfoFunctionLibrary() {
}

float UPlayerGamePlayerInfoFunctionLibrary::GetScore(FPlayerGamePlayerInfo Info) {
    return 0.0f;
}

TEnumAsByte<EPlayerGamePlayerState::Type> UPlayerGamePlayerInfoFunctionLibrary::GetPlayerState(FPlayerGamePlayerInfo Info) {
    return EPlayerGamePlayerState::Alive;
}

int32 UPlayerGamePlayerInfoFunctionLibrary::GetPlayerIndex(FPlayerGamePlayerInfo Info) {
    return 0;
}

AGGPlayerController* UPlayerGamePlayerInfoFunctionLibrary::GetPlayerController(FPlayerGamePlayerInfo Info) {
    return NULL;
}

APawn* UPlayerGamePlayerInfoFunctionLibrary::GetPawn(FPlayerGamePlayerInfo Info) {
    return NULL;
}

float UPlayerGamePlayerInfoFunctionLibrary::GetOutOfBoundsTimestamp(FPlayerGamePlayerInfo Info) {
    return 0.0f;
}

TEnumAsByte<EPlayerGamePlayerLobbyState::Type> UPlayerGamePlayerInfoFunctionLibrary::GetLobbyState(FPlayerGamePlayerInfo Info) {
    return EPlayerGamePlayerLobbyState::Waiting;
}

AGGGoat* UPlayerGamePlayerInfoFunctionLibrary::GetGoat(FPlayerGamePlayerInfo Info) {
    return NULL;
}

AGGPlayerState* UPlayerGamePlayerInfoFunctionLibrary::GetGGPlayerState(FPlayerGamePlayerInfo Info) {
    return NULL;
}


