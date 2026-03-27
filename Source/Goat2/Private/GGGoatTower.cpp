#include "GGGoatTower.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AGGGoatTower::AGGGoatTower(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->TowerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Tower Mesh"));
    this->TeleportLocationArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Teleport Location Arrow"));
    this->TowerBoxTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("Found Tower Trigger"));
    this->bHasBeenSynchronised = false;
    this->bWasSynchronisedOnLoad = false;
    this->bHasPlayedMapSyncAnim = false;
    this->bIsLevelDefaultTower = false;
    this->RewardAmount = 5000;
    this->CameraSequenceActor = NULL;
    this->SyncHoldDuration = 2.00f;
    this->FadeOutDuration = 1.50f;
    this->TeleportArea = NULL;
    this->GatherGoatsTextDuration = 6.00f;
    this->FoundTowerWidgetDuration = 6.00f;
    this->InviteMinDistance = 600.00f;
    this->bCanRise = true;
    this->RelativeTargetHeight = 200.00f;
    this->YawAmountToRotate = 360.00f;
    this->RiseTime = 4.00f;
    this->TowerRiseState = ETowerRiseState::TRS_None;
    this->TeleportLocationArrow->SetupAttachment(TowerMesh);
    this->TowerBoxTrigger->SetupAttachment(TowerMesh);
    this->TowerMesh->SetupAttachment(RootComponent);
}


void AGGGoatTower::OnRep_TowerRiseState() {
}

void AGGGoatTower::OnRep_HasBeenSynchronised() {
}

void AGGGoatTower::OnPlayerLoggedIn(APlayerController* NewPlayerController) {
}



void AGGGoatTower::OnCameraSeqFinished() {
}

void AGGGoatTower::MulticastGoatSynchronisedWithTower_Implementation(AGGGoat* SyncingGoat) {
}

void AGGGoatTower::MulticastFadeOut_Implementation() {
}

bool AGGGoatTower::IsAllGoatsInRange() const {
    return false;
}

bool AGGGoatTower::HasBeenSynchronised() const {
    return false;
}

void AGGGoatTower::HandleUnsyncedTowerOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AGGGoatTower::HandleUnsyncedTowerOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIdex, bool bFromSweep, const FHitResult& SweepResult) {
}


TArray<AGGPlayerState*> AGGGoatTower::GetOverlappingPlayers() {
    return TArray<AGGPlayerState*>();
}

TArray<AGGGoat*> AGGGoatTower::GetOverlappingGoats() {
    return TArray<AGGGoat*>();
}

void AGGGoatTower::CreateTowerSyncedNotification(UObject* WorldContextObject) const {
}

void AGGGoatTower::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGGoatTower, bHasBeenSynchronised);
    DOREPLIFETIME(AGGGoatTower, bWasSynchronisedOnLoad);
    DOREPLIFETIME(AGGGoatTower, TowerRiseState);
    DOREPLIFETIME(AGGGoatTower, OverlappedGoats);
}


