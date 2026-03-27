#include "GGGearAbility_HardHat.h"

UGGGearAbility_HardHat::UGGGearAbility_HardHat() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->BaseClass = NULL;
    this->WorkerClass = NULL;
    this->DropBoxSize = 1000.00f;
    this->DropHeight = 600.00f;
    this->DropPower = 1000.00f;
    this->ChanceToDropWorker = 20;
    this->ChanceToFocusCharacters = 60;
    this->TargetCharactersRadius = 1000.00f;
    this->CharacterPredictionLength = 150.00f;
    this->MaxSpawnedActors = 20;
    this->MaxWorkersSpawned = 5;
    this->SpawnActorSound = NULL;
}


