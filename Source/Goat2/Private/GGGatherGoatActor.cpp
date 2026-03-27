#include "GGGatherGoatActor.h"
#include "Net/UnrealNetwork.h"

AGGGatherGoatActor::AGGGatherGoatActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bCreateGatherIDFromName = true;
    this->bIsCurrentlyGatheringGoats = true;
    this->bGatherGoatsOnOverlap = true;
    this->bShowGoatCountNotification = true;
    this->bIsForInteraction = true;
    this->bIsCurrentlyInteractable = true;
    this->bRequireHold = false;
    this->RequiredHoldDuration = 2.00f;
    this->OverlapComponent = NULL;
}

void AGGGatherGoatActor::SetGatherGoatOverlapComponent(UPrimitiveComponent* Component) {
}

void AGGGatherGoatActor::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AGGGatherGoatActor::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AGGGatherGoatActor::OnAllGoatsGathered(const FString& DoneGatherID) {
}

bool AGGGatherGoatActor::HasAllPlayersReachedTarget() const {
    return false;
}

float AGGGatherGoatActor::GetRequiredHoldDuration_Implementation() {
    return 0.0f;
}

int32 AGGGatherGoatActor::GetNPCInteractionChance_Implementation() {
    return 0;
}



FGameplayTag AGGGatherGoatActor::GetInteractNotificationTag_Implementation() {
    return FGameplayTag{};
}

FString AGGGatherGoatActor::GetInteractNotificationID_Implementation() {
    return TEXT("");
}



bool AGGGatherGoatActor::GetAutoInteractPastDuration_Implementation() {
    return false;
}

bool AGGGatherGoatActor::GatherGoats(AGGPlayerState* FirstPlayer) {
    return false;
}

bool AGGGatherGoatActor::CanBeInteractedWith_Implementation(AActor* SourceActor) {
    return false;
}

void AGGGatherGoatActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGGatherGoatActor, bIsCurrentlyGatheringGoats);
    DOREPLIFETIME(AGGGatherGoatActor, bIsCurrentlyInteractable);
    DOREPLIFETIME(AGGGatherGoatActor, PlayersInOverlapBox);
}


