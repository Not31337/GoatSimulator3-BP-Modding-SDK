#include "GGFlappyGoatStall.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GGCurrencySpendComponent.h"
#include "GGDynamicAssetHoldingComponent.h"
#include "Components/WidgetComponent.h"
#include "Net/UnrealNetwork.h"

AGGFlappyGoatStall::AGGFlappyGoatStall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
    this->RootScene = (USceneComponent*)RootComponent;
    this->TheatreMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TheatreMesh"));
    this->PlayFieldOrigin = CreateDefaultSubobject<USceneComponent>(TEXT("PlayFieldOrigin"));
    this->BirdRoot = CreateDefaultSubobject<USceneComponent>(TEXT("BirdRoot"));
    this->BirdMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BirdMesh"));
    this->BirdHandleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BirdHandleMesh"));
    this->GameCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("GameCamera"));
    this->CurtainMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CurtainMesh"));
    this->ScoreboardMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ScoreboardMesh"));
    this->ScoreWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("ScoreWidget"));
    this->BackdropMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BackdropMesh"));
    this->SpendComponent = CreateDefaultSubobject<UGGCurrencySpendComponent>(TEXT("SpendComponent"));
    this->DynamicAssets = CreateDefaultSubobject<UGGDynamicAssetHoldingComponent>(TEXT("DynamicAssets"));
    this->ColumnRails.AddDefaulted(8);
    this->ColumnSegments.AddDefaulted(40);
    this->ColumnSpacing = 300.00f;
    this->SpawnLocalX = 300.00f;
    this->DespawnLocalX = -300.00f;
    this->ScrollSpeed = 220.00f;
    this->LeadInDistance = 0.00f;
    this->SegmentSlotLocalZ.AddDefaulted(5);
    this->LowGapLift = 35.00f;
    this->BirdLocalX = 0.00f;
    this->StartLocalZ = 200.00f;
    this->FloorLocalZ = 0.00f;
    this->CeilingLocalZ = 400.00f;
    this->bCeilingKills = false;
    this->HopOffsetCurve = NULL;
    this->HopDuration = 0.35f;
    this->FallSpeed = 400.00f;
    this->JumpVelocity = 450.00f;
    this->Gravity = 1400.00f;
    this->StartDelaySeconds = 2.00f;
    this->CurtainOpenDuration = 1.00f;
    this->CurtainCloseDuration = 1.00f;
    this->CurtainClosedHoldDuration = 0.75f;
    this->CurtainOpenScaleZ = 0.05f;
    this->CurtainClosedScaleZ = 1.00f;
    this->BackdropPanParameter = TEXT("BasePanner");
    this->BackdropPanScale = 0.00f;
    this->CameraBlendTime = 1.00f;
    this->CameraBlendFunction = VTBlend_Cubic;
    this->FlapSound = NULL;
    this->ScoreSound = NULL;
    this->DeathSound = NULL;
    this->CurtainOpenSound = NULL;
    this->CurtainCloseSound = NULL;
    this->DeathParticle = NULL;
    this->TutorialID = TEXT("FlappyGoat");
    this->AchievementID = TEXT("FlappyGoatHighScore");
    this->AchievementScoreThreshold = 20;
    this->BackdropMaterial = NULL;
    this->BackdropMesh->SetupAttachment(RootComponent);
    this->BirdHandleMesh->SetupAttachment(BirdRoot);
    this->BirdMesh->SetupAttachment(BirdRoot);
    this->BirdRoot->SetupAttachment(PlayFieldOrigin);
    this->CurtainMesh->SetupAttachment(RootComponent);
    this->GameCamera->SetupAttachment(PlayFieldOrigin);
    this->PlayFieldOrigin->SetupAttachment(RootComponent);
    this->ScoreWidget->SetupAttachment(ScoreboardMesh);
    this->ScoreboardMesh->SetupAttachment(RootComponent);
    this->SpendComponent->SetupAttachment(RootComponent);
    this->TheatreMesh->SetupAttachment(RootComponent);
}

void AGGFlappyGoatStall::ServerFlap_Implementation(float HeightAtFlap, float FlapServerTime) {
}
bool AGGFlappyGoatStall::ServerFlap_Validate(float HeightAtFlap, float FlapServerTime) {
    return true;
}

void AGGFlappyGoatStall::ServerEndRound_Implementation(int32 ReportedScore) {
}
bool AGGFlappyGoatStall::ServerEndRound_Validate(int32 ReportedScore) {
    return true;
}



void AGGFlappyGoatStall::OnRep_Round() {
}

void AGGFlappyGoatStall::OnRep_LastFlap() {
}

void AGGFlappyGoatStall::OnPurchaseSuccessful(AGGGoat* Goat) {
}

void AGGFlappyGoatStall::MulticastPlayDeathEffects_Implementation(uint8 ForRoundId) {
}

void AGGFlappyGoatStall::MulticastBeatAchievement_Implementation(AGGGoat* Goat) {
}

bool AGGFlappyGoatStall::IsRoundActive() const {
    return false;
}

bool AGGFlappyGoatStall::IsCurtainFullyOpen() const {
    return false;
}

AGGGoat* AGGFlappyGoatStall::GetPlayingGoat() const {
    return NULL;
}

int32 AGGFlappyGoatStall::GetDisplayScore() const {
    return 0;
}

void AGGFlappyGoatStall::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGFlappyGoatStall, Round);
    DOREPLIFETIME(AGGFlappyGoatStall, LastFlap);
}


