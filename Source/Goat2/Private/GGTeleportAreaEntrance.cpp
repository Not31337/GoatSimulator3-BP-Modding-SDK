#include "GGTeleportAreaEntrance.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

AGGTeleportAreaEntrance::AGGTeleportAreaEntrance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->ExitLocation = CreateDefaultSubobject<UArrowComponent>(TEXT("Exit Location"));
    this->LaunchDirection = CreateDefaultSubobject<UArrowComponent>(TEXT("Launch Direction"));
    this->OverlapBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Overlap Box"));
    this->EditorNameDisplayText = NULL;
    this->AreaAsset = NULL;
    this->EntranceType = EAreaEntranceType::AET_Entrance;
    this->bMainAreaEntryPoint = true;
    this->bEntranceStartActive = true;
    this->bTravelByOverlap = true;
    this->PlayerLaunchForce = 1000.00f;
    this->PlayerSpawnDistanceAway = 400.00f;
    this->bShouldGatherGoats = false;
    this->DistanceConsideredReached = 1500.00f;
    this->InviteDuration = 30.00f;
    this->bShowGoatCounterNotification = false;
    this->bRemoveAutomatically = false;
    this->bManuallySetReachedTarget = false;
    this->bIsEntranceActive = false;
    this->ExitLocation->SetupAttachment(RootComponent);
    this->LaunchDirection->SetupAttachment(RootComponent);
    this->OverlapBox->SetupAttachment(RootComponent);
}

void AGGTeleportAreaEntrance::SetAreaEntranceActive(bool bNewActive) {
}

void AGGTeleportAreaEntrance::OnRep_bIsEntranceActive() {
}

void AGGTeleportAreaEntrance::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AGGTeleportAreaEntrance::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


void AGGTeleportAreaEntrance::OnAllGoatsGathered(const FString& DoneGatherID) {
}

void AGGTeleportAreaEntrance::MakePlayerStartTravel(AGGPlayerController* Player) {
}

void AGGTeleportAreaEntrance::MakePlayersStartTravel(TArray<AGGPlayerController*> Players) {
}

void AGGTeleportAreaEntrance::MakePlayersInOverlapStartTravel() {
}

void AGGTeleportAreaEntrance::MakeAllPlayersStartTravel() {
}

bool AGGTeleportAreaEntrance::IsAreaEntranceActive() const {
    return false;
}


bool AGGTeleportAreaEntrance::HasPlayerRecentlyTraveled(AGGPlayerController* Player) {
    return false;
}

FVector AGGTeleportAreaEntrance::GetLaunchDirection() const {
    return FVector{};
}






FTransform AGGTeleportAreaEntrance::GetExitTransform() const {
    return FTransform{};
}

bool AGGTeleportAreaEntrance::AreAllPlayersInOverlap() const {
    return false;
}

void AGGTeleportAreaEntrance::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGTeleportAreaEntrance, bIsEntranceActive);
    DOREPLIFETIME(AGGTeleportAreaEntrance, PlayersInOverlapBox);
}


