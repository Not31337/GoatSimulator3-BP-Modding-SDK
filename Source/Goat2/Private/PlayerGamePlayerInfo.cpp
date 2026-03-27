#include "PlayerGamePlayerInfo.h"

FPlayerGamePlayerInfo::FPlayerGamePlayerInfo() {
    this->Score = 0.00f;
    this->Pawn = NULL;
    this->Goat = NULL;
    this->GGPlayerState = NULL;
    this->PC = NULL;
    this->PlayerIndex = 0;
    this->PlayerState = EPlayerGamePlayerState::Alive;
    this->LobbyState = EPlayerGamePlayerLobbyState::Waiting;
    this->OutOfBoundsTimestamp = 0.00f;
}

