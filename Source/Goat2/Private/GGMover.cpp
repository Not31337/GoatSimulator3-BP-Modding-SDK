#include "GGMover.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AGGMover::AGGMover(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mover Mesh"));
    this->MoverMesh = (UStaticMeshComponent*)RootComponent;
    this->bCanBeLicked = true;
    this->bOverrideMeshNameInfo = false;
}

bool AGGMover::SetGoatSimName_Implementation(const FText& NewName) {
    return false;
}

bool AGGMover::RemoveGoatSimNameModifier_Implementation(FGameplayTag ModifierTag) {
    return false;
}

bool AGGMover::PrepareForLick_Implementation() {
    return false;
}

void AGGMover::OnRep_CurrentActorName() {
}

void AGGMover::ObjectWasHeadbutted_Implementation(AGGGoat* HeadbuttingGoat) {
}




FVector AGGMover::GetLickInfo_Implementation(FVector LickLocation, FName& BoneName, FRotator& MeshLickRotation, FVector& RelativeLickLocation) {
    return FVector{};
}

UMeshComponent* AGGMover::GetLickableActorMeshComponent_Implementation() {
    return NULL;
}

bool AGGMover::GetHasActorName_Implementation() {
    return false;
}

FText AGGMover::GetGoatSimName_Implementation(bool WithStyling) {
    return FText::GetEmpty();
}

FText AGGMover::GetFullGoatSimName_Implementation(bool WithStyling) {
    return FText::GetEmpty();
}

bool AGGMover::CanBeLicked_Implementation() {
    return false;
}

bool AGGMover::CanBeHeadbutted_Implementation(AGGGoat* HeadbuttingGoat) {
    return false;
}

bool AGGMover::AddGoatSimNameModifier_Implementation(FGameplayTag ModifierTag, const FText& OverrideText) {
    return false;
}

void AGGMover::ActorWasLicked_Implementation(AGGGoat* LickingGoat) {
}

void AGGMover::ActorStoppedBeingLicked_Implementation(AGGGoat* LickingGoat) {
}

void AGGMover::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGMover, CurrentActorName);
}


