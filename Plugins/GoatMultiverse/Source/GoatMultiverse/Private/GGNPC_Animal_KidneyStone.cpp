#include "GGNPC_Animal_KidneyStone.h"
#include "ENPCType.h"

AGGNPC_Animal_KidneyStone::AGGNPC_Animal_KidneyStone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(2);
    this->NotResilientToDamageTypes.AddDefaulted(1);
    this->bPhysicalAnimateRiding = false;
    this->NPCType = ENPCType::NT_Animal;
    this->bCanProximityReact = false;
    this->bCanInvestigate = false;
    this->bCanBeKnockedOut = false;
    this->bCanPassOut = false;
    this->PassedOutChancePerHit.AddDefaulted(3);
    this->bCanRandomlyLookAtNPC = false;
    this->bCanRandomlyLookAtGoat = false;
    this->RunSpeedRange = 0.00f;
    this->Health = 100.00f;
    this->bDead = false;
    this->SlipperyTrailActor = NULL;
    this->SlipperyTailActorClass = NULL;
    this->DistanceNeededForPoint = 200.00f;
}

void AGGNPC_Animal_KidneyStone::StopBehavior() {
}

void AGGNPC_Animal_KidneyStone::StartBehavior() {
}

void AGGNPC_Animal_KidneyStone::SpawnNewSlipperyTrail() {
}

void AGGNPC_Animal_KidneyStone::RemoveSlipperyTrail() {
}

void AGGNPC_Animal_KidneyStone::MulticastPlayDieFX_Implementation() {
}

void AGGNPC_Animal_KidneyStone::MulticastPlayAttackFX_Implementation(AGGGoat* Target) {
}




