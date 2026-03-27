#include "GGRespawnReferenceHandler.h"

UGGRespawnReferenceHandler::UGGRespawnReferenceHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UGGRespawnReferenceHandler::RemoveMultipleCharacterRefs(TArray<AGGCharacter*>& CharacterRefsToRemove) {
}

bool UGGRespawnReferenceHandler::RemoveCharacterRef(AGGCharacter*& CharacterRefToRemove) {
    return false;
}

void UGGRespawnReferenceHandler::RemoveAllCharacterRefs() {
}

void UGGRespawnReferenceHandler::OnTrackedCharacterRespawned(AGGCharacter* OldCharacter, AGGCharacter* NewCharacter) {
}

TArray<AGGCharacter*> UGGRespawnReferenceHandler::GetCharacters() const {
    return TArray<AGGCharacter*>();
}

void UGGRespawnReferenceHandler::AddMultipleCharacterRefs(TArray<AGGCharacter*>& CharacterRefsToAdd) {
}

bool UGGRespawnReferenceHandler::AddCharacterRef(AGGCharacter*& CharacterRefToAdd) {
    return false;
}


