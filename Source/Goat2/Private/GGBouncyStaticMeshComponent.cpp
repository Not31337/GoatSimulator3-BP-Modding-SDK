#include "GGBouncyStaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

UGGBouncyStaticMeshComponent::UGGBouncyStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->BounceFactor = 300.00f;
    this->MaxBounceVelocity = 500.00f;
    this->bCapCharacterToMaxBounce = false;
    this->bForceMaxVelocity = false;
    this->bIgnoreInVelocityDirection = false;
    this->bRequireMinVelocity = false;
    this->MinRequiredVelocity = 0.00f;
    this->bRequireCharacterFalling = true;
    this->MinTimeBetweenBounces = 0.25f;
    this->RagdollDelayOnBadRotation = 0.20f;
    this->bAllwaysRagdollOnBounce = false;
    this->CharacterRandomSpin = 10000.00f;
    this->bIsBounceable = true;
    this->BounceDirComponent = NULL;
}

void UGGBouncyStaticMeshComponent::SetBounceDirection(FRotator Rotation) {
}

void UGGBouncyStaticMeshComponent::RemoveBounceIgnoredActor(AActor* Actor) {
}

TArray<AActor*> UGGBouncyStaticMeshComponent::GetBounceIgnoredActors() const {
    return TArray<AActor*>();
}

void UGGBouncyStaticMeshComponent::ClearBounceIgnoredActor() {
}

void UGGBouncyStaticMeshComponent::BouncyCompOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool UGGBouncyStaticMeshComponent::Bounce(AActor* OtherActor, UPrimitiveComponent* OtherComp) {
    return false;
}

void UGGBouncyStaticMeshComponent::AddBounceIgnoredActor(AActor* Actor) {
}

void UGGBouncyStaticMeshComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGBouncyStaticMeshComponent, bIsBounceable);
    DOREPLIFETIME(UGGBouncyStaticMeshComponent, BounceIgnoredActors);
}


