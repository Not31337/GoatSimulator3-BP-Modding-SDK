#include "GGLevelSequenceActor.h"

AGGLevelSequenceActor::AGGLevelSequenceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseSignificance = false;
    this->SignificanceRange = 10000.00f;
    this->SignificanceReactions.AddDefaulted(4);
    this->LastTickTimestamp = 0.00f;
}

void AGGLevelSequenceActor::UpdateSignificance(float OldSignificance, float NewSignificance) {
}

float AGGLevelSequenceActor::GetSignificanceRange() const {
    return 0.0f;
}

FVector AGGLevelSequenceActor::GetSignificanceLocation() {
    return FVector{};
}

ULevelSequencePlayer* AGGLevelSequenceActor::CreateGGLevelSequencePlayer(UObject* WorldContextObject, bool UseSignificance, ULevelSequence* InLevelSequence, FMovieSceneSequencePlaybackSettings Settings, AGGLevelSequenceActor*& OutActor) {
    return NULL;
}


