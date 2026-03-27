#include "GGDestructibleActor.h"
#include "Net/UnrealNetwork.h"

AGGDestructibleActor::AGGDestructibleActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->bCanBeInCluster = false;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
    this->bOverrideDestructibleInfo = false;
    this->bOverrideMeshNameInfo = false;
}

void AGGDestructibleActor::ShatterActor_Implementation(FVector Impulse) {
}

bool AGGDestructibleActor::SetGoatSimName_Implementation(const FText& NewName) {
    return false;
}

bool AGGDestructibleActor::RemoveGoatSimNameModifier_Implementation(FGameplayTag ModifierTag) {
    return false;
}

void AGGDestructibleActor::OnRep_CurrentActorName() {
}

void AGGDestructibleActor::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
}

void AGGDestructibleActor::OnDestructibleDestroyed_Implementation() {
}

void AGGDestructibleActor::ObjectWasHeadbutted_Implementation(AGGGoat* HeadbuttingGoat) {
}

bool AGGDestructibleActor::HasShattered() const {
    return false;
}

bool AGGDestructibleActor::GetHasActorName_Implementation() {
    return false;
}

FText AGGDestructibleActor::GetGoatSimName_Implementation(bool WithStyling) {
    return FText::GetEmpty();
}

FText AGGDestructibleActor::GetFullGoatSimName_Implementation(bool WithStyling) {
    return FText::GetEmpty();
}

bool AGGDestructibleActor::CanBeHeadbutted_Implementation(AGGGoat* HeadbuttingGoat) {
    return false;
}

bool AGGDestructibleActor::AddGoatSimNameModifier_Implementation(FGameplayTag ModifierTag, const FText& OverrideText) {
    return false;
}

void AGGDestructibleActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGDestructibleActor, CurrentActorName);
}


