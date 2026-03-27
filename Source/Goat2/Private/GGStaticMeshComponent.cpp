#include "GGStaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

UGGStaticMeshComponent::UGGStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeLicked = false;
    this->bCanBecomePhysicsActor = true;
    this->OverriddenPActorMesh = NULL;
    this->bRetainMaterialsAsPActor = true;
    this->bCanBecomePhysicsActorByDamage = true;
    this->bCanBecomePhysicsActorByActorDamage = true;
    this->bCanBecomePhysicsActorByImpact = true;
    this->bCanBecomePhysicsActorByGoatRagdoll = false;
    this->bCanBecomePhysicsActorByActorImpact = false;
    this->MomentumThreshold = 100.00f;
    this->bCanGetStatusEffects = true;
    this->MaxAngularImpulse = 15.00f;
    this->bOverrideMeshNameInfo = false;
}

bool UGGStaticMeshComponent::ShouldDisplayNameOnRepel_Implementation() {
    return false;
}

bool UGGStaticMeshComponent::SetGoatSimName_Implementation(const FText& NewName) {
    return false;
}

bool UGGStaticMeshComponent::RemoveGoatSimNameModifier_Implementation(FGameplayTag ModifierTag) {
    return false;
}

bool UGGStaticMeshComponent::PrepareForLick_Implementation() {
    return false;
}

void UGGStaticMeshComponent::OnRep_OnPhysicsActorStateUpdate() {
}

void UGGStaticMeshComponent::OnRep_CurrentActorName() {
}


void UGGStaticMeshComponent::ObjectWasHeadbutted_Implementation(AGGGoat* HeadbuttingGoat) {
}

bool UGGStaticMeshComponent::HasBecomePhysicsActor() const {
    return false;
}

FVector UGGStaticMeshComponent::GetLickInfo_Implementation(FVector LickLocation, FName& BoneName, FRotator& MeshLickRotation, FVector& RelativeLickLocation) {
    return FVector{};
}

UMeshComponent* UGGStaticMeshComponent::GetLickableActorMeshComponent_Implementation() {
    return NULL;
}

bool UGGStaticMeshComponent::GetHasActorName_Implementation() {
    return false;
}

FText UGGStaticMeshComponent::GetGoatSimName_Implementation(bool WithStyling) {
    return FText::GetEmpty();
}

FText UGGStaticMeshComponent::GetFullGoatSimName_Implementation(bool WithStyling) {
    return FText::GetEmpty();
}

void UGGStaticMeshComponent::ComponentTakeDamage_Implementation(float DamageAmount, const FImpulseDamageEvent& ImpulseDamageEvent, AController* EventInstigator, AActor* DamageCauser) {
}

bool UGGStaticMeshComponent::CanBeLicked_Implementation() {
    return false;
}

bool UGGStaticMeshComponent::CanBeHeadbutted_Implementation(AGGGoat* HeadbuttingGoat) {
    return false;
}

bool UGGStaticMeshComponent::CanBecomePActorByGoatRagdoll_Implementation() {
    return false;
}

AGGPhysicsActor_Base* UGGStaticMeshComponent::BecomePhysicsActor_Implementation(FVector Impulse) {
    return NULL;
}

bool UGGStaticMeshComponent::AddGoatSimNameModifier_Implementation(FGameplayTag ModifierTag, const FText& OverrideText) {
    return false;
}

void UGGStaticMeshComponent::ActorWasLicked_Implementation(AGGGoat* LickingGoat) {
}

void UGGStaticMeshComponent::ActorTakeDamageWithEvent_Implementation(float DamageAmount, FVector InImpulse, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) {
}

void UGGStaticMeshComponent::ActorTakeAnyDamage_Implementation(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void UGGStaticMeshComponent::ActorStoppedBeingLicked_Implementation(AGGGoat* LickingGoat) {
}

void UGGStaticMeshComponent::ActorOnHitDelegate_Implementation(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void UGGStaticMeshComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGStaticMeshComponent, PhysicsActorState);
    DOREPLIFETIME(UGGStaticMeshComponent, bCanBecomePhysicsActor);
    DOREPLIFETIME(UGGStaticMeshComponent, CurrentActorName);
}


