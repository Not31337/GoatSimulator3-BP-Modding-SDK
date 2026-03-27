#include "GGLobbyInformation.h"

FGGLobbyInformation::FGGLobbyInformation() {
    this->bValidLobby = false;
    this->OpenSlots = 0;
    this->MaxSlots = 0;
    this->bIsSearchResult = false;
    this->bIsOwnerDataPending = false;
}

