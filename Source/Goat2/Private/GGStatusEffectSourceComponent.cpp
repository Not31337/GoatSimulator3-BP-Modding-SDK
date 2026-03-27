#include "GGStatusEffectSourceComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UGGStatusEffectSourceComponent::UGGStatusEffectSourceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ParticleComponentMaxCullDistance = 3500.00f;
    this->bStartActive = false;
    this->bActivateFromContactWithStatus = false;
    this->TypeToActivateFrom = EStatusEffectTypes::SET_None;
    this->bCanActivateFromOtherSourceComp = false;
    this->bActivateFromWaterVolume = false;
    this->bActivateFromDamage = false;
    this->DamageNeeded = 0.00f;
    this->bDeactivateWithTime = true;
    this->DeactivateAfter = 20.00f;
    this->bSpreadOnOverlap = true;
    this->bSpreadOnHit = true;
    this->bUpdateOverlapsInReCheck = false;
    this->StatusEffectToSpread = EStatusEffectTypes::SET_None;
    this->StatusEffectClass = NULL;
    this->bRemoveSpreadTypeFromOwnerManager = true;
    this->bContinuallyRecheckOverlaps = true;
    this->RecheckInterval = 1.00f;
    this->ActorSpreadCooldown = 3.00f;
    this->bSizzleInsteadOfInstantSpread = false;
    this->SizzlingDuration = 1.00f;
    this->SizzleParticle = NULL;
    this->SizzlingParticleScale = 1.50f;
    this->SizzleSound = NULL;
    this->bNotifyNPCsInstead = false;
    this->SkipMoods.AddDefaulted(1);
}

void UGGStatusEffectSourceComponent::UnregisterParticleComponent(UParticleSystemComponent* ParticleComponent) {
}

void UGGStatusEffectSourceComponent::UnregisterComponentForOverlap(UPrimitiveComponent* Component) {
}

void UGGStatusEffectSourceComponent::UnregisterComponentForHit(UPrimitiveComponent* Component) {
}

void UGGStatusEffectSourceComponent::UnregisterAudioComponent(UAudioComponent* AudioComponent) {
}


void UGGStatusEffectSourceComponent::SpreadStatusEffect(AActor* SpreadTo, EApplicationMethod ApplicationMethod, UPrimitiveComponent* SpreadToComponent) {
}



void UGGStatusEffectSourceComponent::SetUpdateOverlapsInReCheck(bool bShouldUpdate) {
}

void UGGStatusEffectSourceComponent::SetStatusEffectToSpread(EStatusEffectTypes Type, TSubclassOf<AGGStatusEffectBase> Class) {
}

void UGGStatusEffectSourceComponent::SetStartActive(bool bShouldStartActive) {
}

void UGGStatusEffectSourceComponent::SetSpreadOnOverlap(bool bShouldSpread) {
}

void UGGStatusEffectSourceComponent::SetSpreadOnHit(bool bShouldSpread) {
}

void UGGStatusEffectSourceComponent::SetDeactivateWithTime(bool bShouldDeactivate) {
}

void UGGStatusEffectSourceComponent::SetCanActivateFromOtherSourceComp(bool bActivateFromOtherSourceComp) {
}

void UGGStatusEffectSourceComponent::RegisterParticleComponent(UParticleSystemComponent* ParticleComponent) {
}

void UGGStatusEffectSourceComponent::RegisterComponentForOverlap(UPrimitiveComponent* Component) {
}

void UGGStatusEffectSourceComponent::RegisterComponentForHit(UPrimitiveComponent* Component) {
}

void UGGStatusEffectSourceComponent::RegisterAudioComponent(UAudioComponent* AudioComponent) {
}

void UGGStatusEffectSourceComponent::RecheckOverlaps() {
}

void UGGStatusEffectSourceComponent::PhysicsVolumeChanged(APhysicsVolume* NewVolume) {
}

void UGGStatusEffectSourceComponent::OwnerTookDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void UGGStatusEffectSourceComponent::OverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UGGStatusEffectSourceComponent::OverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UGGStatusEffectSourceComponent::OnRep_SourceActiveState() {
}

void UGGStatusEffectSourceComponent::OnRep_SizzlingActors() {
}

void UGGStatusEffectSourceComponent::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

bool UGGStatusEffectSourceComponent::IsSourceActive() const {
    return false;
}

bool UGGStatusEffectSourceComponent::IsSizzling(AActor* Actor) const {
    return false;
}

bool UGGStatusEffectSourceComponent::IsActorOnCooldown(AActor* CheckActor) {
    return false;
}

bool UGGStatusEffectSourceComponent::HasStatusEffectSourceComp(AActor* FromActor, TSubclassOf<UGGStatusEffectSourceComponent> SpecificClass) {
    return false;
}

EStatusEffectTypes UGGStatusEffectSourceComponent::GetStatusEffectToSpread() const {
    return EStatusEffectTypes::SET_None;
}

UGGStatusEffectSourceComponent* UGGStatusEffectSourceComponent::GetStatusEffectSourceComp(AActor* FromActor, TSubclassOf<UGGStatusEffectSourceComponent> SpecificClass) {
    return NULL;
}

bool UGGStatusEffectSourceComponent::GetCanActivateFromOtherSourceComp() const {
    return false;
}

bool UGGStatusEffectSourceComponent::GetActivateFromContactWithStatus() const {
    return false;
}

AActor* UGGStatusEffectSourceComponent::GetActivatedBy() const {
    return NULL;
}

void UGGStatusEffectSourceComponent::DeactivateSource() {
}

void UGGStatusEffectSourceComponent::ActivateSource(AActor* Activator) {
}

void UGGStatusEffectSourceComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGStatusEffectSourceComponent, SourceActiveState);
    DOREPLIFETIME(UGGStatusEffectSourceComponent, SizzlingActors);
}


