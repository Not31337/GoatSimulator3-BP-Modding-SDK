#include "MusicTrack.h"

UMusicTrack::UMusicTrack() {
    this->SoundClass = NULL;
    this->bEmulateContinuousPlay = false;
    this->bPersistOnLevelTransition = false;
    this->TrackCrossFadeTime = 1.00f;
    this->TrackPriority = 0;
}


