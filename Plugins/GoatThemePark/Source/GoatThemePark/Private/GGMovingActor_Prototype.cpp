#include "GGMovingActor_Prototype.h"
#include "Components/BoxComponent.h"
#include "Net/UnrealNetwork.h"

AGGMovingActor_Prototype::AGGMovingActor_Prototype(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoxOverlap = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Overlap"));
    this->bSetRotationToSpline = true;
    this->CurrentSpline = NULL;
    this->NPCClass = NULL;
    this->bAttachNPC = false;
    this->Montage = NULL;
    this->AttachedNPC = NULL;
    this->BoxOverlap->SetupAttachment(RootComponent);
}

void AGGMovingActor_Prototype::OnRep_FollowSplineData() {
}

void AGGMovingActor_Prototype::OnNPCAttachmentStateChanged(USceneComponent* Component) {
}

void AGGMovingActor_Prototype::OnGoatLanded(AGGGoat* Goat, AActor* FloorActor, UPrimitiveComponent* FloorComponent) {
}

void AGGMovingActor_Prototype::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AGGMovingActor_Prototype::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AGGMovingActor_Prototype::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGMovingActor_Prototype, FollowSplineData);
}


