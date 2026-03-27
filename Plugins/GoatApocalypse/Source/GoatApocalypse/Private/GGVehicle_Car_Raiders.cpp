#include "GGVehicle_Car_Raiders.h"
#include "Components/AudioComponent.h"
#include "Components/SceneComponent.h"

AGGVehicle_Car_Raiders::AGGVehicle_Car_Raiders(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->ValidDriverTypes.AddDefaulted(3);
    this->ValidDamageTypes.AddDefaulted(6);
    this->RaiderSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Raider Scene Component"));
    this->MusicComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("Music Component"));
    this->RaiderClass = NULL;
    this->GuitarMontage = NULL;
    this->CurrentTargetActor = NULL;
    this->NPCOnCar = NULL;
    this->MusicComponent->SetupAttachment(RaiderSceneComponent);
    this->RaiderSceneComponent->SetupAttachment(RootComponent);
}

void AGGVehicle_Car_Raiders::OnNPCRagdolled(ULSCharacterMovementComponent* MovementComp, ACharacter* OwnerCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void AGGVehicle_Car_Raiders::OnNPCPooledOrMoved(AGGNPC* NPC, bool bWasPooled) {
}


