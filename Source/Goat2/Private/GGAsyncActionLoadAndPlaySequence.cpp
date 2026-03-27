#include "GGAsyncActionLoadAndPlaySequence.h"

UGGAsyncActionLoadAndPlaySequence::UGGAsyncActionLoadAndPlaySequence() {
    this->WorldContextObject = NULL;
    this->LevelSequenceActor = NULL;
}

void UGGAsyncActionLoadAndPlaySequence::SequenceStopped() {
}

void UGGAsyncActionLoadAndPlaySequence::SequencePlayed() {
}

void UGGAsyncActionLoadAndPlaySequence::SequencePaused() {
}

void UGGAsyncActionLoadAndPlaySequence::SequenceFinished() {
}

UGGAsyncActionLoadAndPlaySequence* UGGAsyncActionLoadAndPlaySequence::CreateAsyncAction(UObject* NewWorldContextObject, TSoftObjectPtr<ULevelSequence> NewLevelSequence, FMovieSceneSequencePlaybackSettings NewPlaybackSettings) {
    return NULL;
}


