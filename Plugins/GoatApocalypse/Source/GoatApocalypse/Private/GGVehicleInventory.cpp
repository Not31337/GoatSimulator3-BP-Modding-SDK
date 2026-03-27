#include "GGVehicleInventory.h"
#include "Net/UnrealNetwork.h"

UGGVehicleInventory::UGGVehicleInventory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->MeshFullInventory = NULL;
    this->MeshMaxRandomRotation = 25.00f;
    this->InteractionRadius = 150.00f;
    this->AdditionalMeshOffset = 0.00f;
    this->InventorySize = 50;
    this->HighlightMaterial = NULL;
    this->TimeToScaleCatchedActor = 0.20f;
    this->TimeToScaleReleasedActor = 0.20f;
    this->bRagdollNPCsOnRelease = false;
    this->ReleaseImpulse = 1000.00f;
    this->SoundItemAddedToInventory = NULL;
    this->SoundItemRemovedFromInventory = NULL;
    this->ParticlesItemAddedToInventory = NULL;
    this->ParticlesItemRemovedFromInventory = NULL;
    this->OverlapVolume = NULL;
    this->ReleaseDirectionArrow = NULL;
    this->ActorBeeingAddedToInventory = NULL;
    this->DefaultMaterial = NULL;
}

void UGGVehicleInventory::ServerRemoveActorFromInventory_Implementation(AActor* Actor) {
}

void UGGVehicleInventory::ServerAddActorToInventory_Implementation(AActor* Actor) {
}

AActor* UGGVehicleInventory::RemoveLastActorFromInventory() {
    return NULL;
}

void UGGVehicleInventory::RemoveActorFromInventory(AActor* Actor) {
}

void UGGVehicleInventory::OnStoredActorDestroyed(AActor* DestroyedActor) {
}

void UGGVehicleInventory::OnRep_Items() {
}

void UGGVehicleInventory::OnNearbyActorLicked(AActor* LickedActor, AGGGoat* LickingGoat) {
}

void UGGVehicleInventory::OnNearbyActorDropped(AActor* LickedActor, AGGGoat* LickingGoat) {
}

void UGGVehicleInventory::OnInteractionRangeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UGGVehicleInventory::OnInteractionRangeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UGGVehicleInventory::MulticastRemoveActorFromInventory_Implementation(AActor* Actor, const FVector& ReleaseLocation, const FGGReleaseOptions& Options, FVector ParticleLocationLS) {
}

void UGGVehicleInventory::MulticastReInsertActors_Implementation(const TArray<AActor*>& Actors) {
}

void UGGVehicleInventory::MulticastAddActorToInventory_Implementation(AActor* Actor, const FGGCatchOptions& Options) {
}

bool UGGVehicleInventory::CanActorBeStoredInInventory(const AActor* Actor) const {
    return false;
}

bool UGGVehicleInventory::AddActorToInventory(AActor* Actor) {
    return false;
}

void UGGVehicleInventory::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGVehicleInventory, Items);
}


