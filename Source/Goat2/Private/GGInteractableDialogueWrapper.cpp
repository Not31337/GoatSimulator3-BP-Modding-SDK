#include "GGInteractableDialogueWrapper.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "GGSpeechBubbleComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AGGInteractableDialogueWrapper::AGGInteractableDialogueWrapper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->InteractionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Interaction Box"));
    this->SphereForAutoDialogueStart = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere for auto dialogue start"));
    this->SpeechBubbleComponent = CreateDefaultSubobject<UGGSpeechBubbleComponent>(TEXT("Speech Bubble"));
    this->bFitOverlapBoxToBounds = true;
    this->AdditionalBoundsExtent = 0.00f;
    this->Dialogue = NULL;
    this->DialogueInstance = NULL;
    this->AttachedNPC = NULL;
    this->InteractionBox->SetupAttachment(RootComponent);
    this->SpeechBubbleComponent->SetupAttachment(InteractionBox);
    this->SphereForAutoDialogueStart->SetupAttachment(InteractionBox);
}

void AGGInteractableDialogueWrapper::ToggleDialogueIndicator(UGGDialogueInstance* Instance) {
}

AGGInteractableDialogueWrapper* AGGInteractableDialogueWrapper::SpawnDialogueAndAssignToActor(TSubclassOf<AGGInteractableDialogueWrapper> DialogueWrapperClass, UGGDialogueDataAsset* NewDialogue, AActor* TargetActor) {
    return NULL;
}

void AGGInteractableDialogueWrapper::SimulateInteraction(AActor* InteractingActor) {
}

void AGGInteractableDialogueWrapper::SetDialogueIndicatorVisibility(bool bShouldBeVisible) {
}

void AGGInteractableDialogueWrapper::RemoveSpeechBubbleForLocalPlayer(ULocalPlayer* LocalPlayer) {
}

void AGGInteractableDialogueWrapper::OnRep_Instance() {
}

void AGGInteractableDialogueWrapper::OnRep_Dialogue() {
}

void AGGInteractableDialogueWrapper::OnOverlapSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AGGInteractableDialogueWrapper::OnDialogueEnded(UGGDialogueInstance* Instance) {
}

void AGGInteractableDialogueWrapper::OnAttachParentNPCPooled(AGGNPC* NPC, bool bWasPooled) {
}

void AGGInteractableDialogueWrapper::OnAttachParentActorDestroyed(AActor* AttachParent) {
}

void AGGInteractableDialogueWrapper::OnAttachedNPCRagdolled(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdolledNPC, const FRagdollStateChangeSettings& StateChangeSettings) {
}

AGGInteractableDialogueWrapper* AGGInteractableDialogueWrapper::FindInteractableDialogueWrapperActor(AActor* InActor) {
    return NULL;
}

void AGGInteractableDialogueWrapper::AddSpeechBubbleForNonPrimaryLocalPlayer(ULocalPlayer* LocalPlayer) {
}

void AGGInteractableDialogueWrapper::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGInteractableDialogueWrapper, Dialogue);
    DOREPLIFETIME(AGGInteractableDialogueWrapper, DialogueInstance);
}


