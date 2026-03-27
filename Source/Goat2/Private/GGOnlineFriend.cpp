#include "GGOnlineFriend.h"

FGGOnlineFriend::FGGOnlineFriend() {
    this->bIsOnline = false;
    this->bIsPlayingAGame = false;
    this->bIsPlayingThisGame = false;
    this->bInLobby = false;
    this->OpenSlots = 0;
    this->bIsPlayingInALevel = false;
    this->bIsPlayingSplitscreen = false;
    this->bIsMultiplayerLocked = false;
    this->FriendPlatform = EFriendPlatform::FP_Steam;
}

