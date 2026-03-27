#include "LevelSequenceSignificanceActorSettings.h"

FLevelSequenceSignificanceActorSettings::FLevelSequenceSignificanceActorSettings() {
    this->CollisionEnabled = ECollisionEnabled::NoCollision;
    this->bGenerateOverlapEvents = false;
    this->bGeneratePhysicsVolumeEvents = false;
    this->bNoSkeletonUpdate = false;
}

