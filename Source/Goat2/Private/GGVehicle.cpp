#include "GGVehicle.h"
#include "Components/ArrowComponent.h"
#include "Components/AudioComponent.h"
#include "Components/BoxComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine/EngineTypes.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "AbilitySystemComponent.h"
#include "GGCameraFovController.h"
#include "GGStatusEffectManager.h"
#include "GGVehicleAppearanceManager.h"
#include "GGVehicleAttributeSet.h"
#include "GGWaterFloatingComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AGGVehicle::AGGVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    //this->bCanReceiveDecals = false;
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Vehicle Mesh"));
    this->Tags.AddDefaulted(1);
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    this->VehicleMesh = (USkeletalMeshComponent*)RootComponent;
    this->VehicleOverlapBox = CreateDefaultSubobject<UBoxComponent>(TEXT("VehicleOverlapBox"));
    this->CameraSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraSpringArm"));
    this->Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    this->CameraFovController = CreateDefaultSubobject<UGGCameraFovController>(TEXT("CameraFovController"));
    this->AbilitySystem = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystem"));
    this->VehicleAttributeSet = CreateDefaultSubobject<UGGVehicleAttributeSet>(TEXT("Vehicle Attribute Set"));
    this->FloatingComp = CreateDefaultSubobject<UGGWaterFloatingComponent>(TEXT("Floating Comp"));
    this->AppearanceManager = CreateDefaultSubobject<UGGVehicleAppearanceManager>(TEXT("Appearance Manager"));
    this->MiddleFeeler = CreateDefaultSubobject<UArrowComponent>(TEXT("Middle Feeler"));
    this->LeftFeeler = CreateDefaultSubobject<UArrowComponent>(TEXT("Left Feeler"));
    this->RightFeeler = CreateDefaultSubobject<UArrowComponent>(TEXT("Right Feeler"));
    this->LeftBackFeeler = CreateDefaultSubobject<UArrowComponent>(TEXT("Left Back Feeler"));
    this->RightBackFeeler = CreateDefaultSubobject<UArrowComponent>(TEXT("Right Back Feeler"));
    this->ScrapeEffectComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Scrape Effect Comp"));
    this->EngineAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("Engine Audio"));
    this->CrashAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("Crash Audio"));
    this->BrakeAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("Brake Audio"));
    this->HornAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("Horn Audio"));
    this->ScrapeAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("Scrape Audio"));
    this->EngineSoundController = CreateDefaultSubobject<UGGVehicleEngineSoundController>(TEXT("EngineSoundController"));
    this->VehicleType = EVehicleType::VT_Car;
    this->bIgnorePlacementWithoutSpawnerWarning = false;
    this->CurrentState = EVehicleState::VS_Idle;
    this->EngineOn = false;
    this->bCanBeEntered = true;
    this->Driver = NULL;
    this->FlippedOver = false;
    this->SpeedKPH = 0;
    this->bVehicleInputDisabled = false;
    this->bScalePassengersWithVehicle = true;
    this->ValidDriverTypes.AddDefaulted(3);
    this->StartAsGhostEditorPlaced = false;
    this->bGenerateAppearanceEditorPlaced = false;
    this->CanRoamRandomly = true;
    this->ReturnToGhostAfterExit = true;
    this->BehaviorTree = NULL;
    this->bFeelerIgnoreLandscape = false;
    this->MinBroadcastCrashSpeed = 200.00f;
    this->StopForAfterHeadbutt = 3.00f;
    this->CrashTextFormat = FText::FromString(TEXT("<YELLOW>Crashed into</> {0}"));
    this->RanOverTextFormat = FText::FromString(TEXT("<YELLOW>Ran over</> {0}"));
    this->RunOverByTextFormat = FText::FromString(TEXT("<RED>Run over by</> {0}"));
    this->ShellMesh = NULL;
    this->bImportantVehicle = false;
    this->OverrideNPCDriver = NULL;
    this->bForceManagerRelevant = false;
    this->EnterSound = NULL;
    this->ExitSound = NULL;
    this->IgnitionSound = NULL;
    this->BrakeSoundThreshold = 300.00f;
    this->IsDrifting = false;
    this->NonBrakeSideVelocity = 500.00f;
    this->BrakeVelocity = 300.00f;
    this->bCanExplode = true;
    this->bHasExploded = false;
    this->Health = 300.00f;
    this->HealthMax = 300.00f;
    this->PlayerDamageReduction = 0.60f;
    this->SelfLaunchPower = 500.00f;
    this->ExplosionRadius = 1000.00f;
    this->CharacterImpulseStrength = 1500.00f;
    this->ImpulseStrength = 40000.00f;
    this->ValidDamageTypes.AddDefaulted(6);
    this->ExplosionParticle = NULL;
    this->ExplosionSound = NULL;
    this->WreckedVehicleClass = NULL;
    this->WreckedVehicleMesh = NULL;
    this->SmokeParticle = NULL;
    this->FireParticle = NULL;
    this->ExplosionNotifyRadius = 1700.00f;
    this->ExplosionChanceToPanic = 50;
    this->ExplosionPanicType = EPanicTypes::PT_Random;
    this->HPState = EHealthParticleState::HPS_None;
    this->LowHealthSmokeComp = NULL;
    this->LowHealthFireComp = NULL;
    this->ExplosionCameraShake = NULL;
    this->DesiredColorMaterialIndex = -1;
    this->CameraBlendDuration = 0.75f;
    this->CameraArmLengthMin = 300.00f;
    this->CameraArmLengthMax = 900.00f;
    this->DefaultCameraArmPitch = -10.00f;
    this->bUseDriverCameraSettingsForPassengers = false;
    this->CameraFollowVehicle = EGGVehicleCameraFollow::FollowWhenUsingGamepad;
    this->MinVelocityForGamepadCamera = 100.00f;
    this->bAlignCameraWithVehiclePitch = true;
    this->BoostDeltaFOV = 20.00f;
    this->FovEaseFunc = EEasingFunc::EaseIn;
    this->FovEaseBlendExp = 3.00f;
    this->MaxFovStepSize = 1.00f;
    this->ImpactDamage = 100.00f;
    this->ImpactDestructibleImpulseMultiplier = 100.00f;
    this->MinSpeedForDamage = 300.00f;
    this->MinSpeedForCharacterRagdoll = 100.00f;
    this->CharacterOverlapPower = 1500.00f;
    this->DestructibleOverlapPower = 1500.00f;
    this->SelfSpinPower = 15.00f;
    this->ImpulseMultiplier = 0.03f;
    this->MinVelocityForDestructibleDamageApply = 10.00f;
    this->MinimumPActorSizeForImpact = 50.00f;
    this->DestructibleOverlapShakeKphMax = 100.00f;
    this->DestructibleOverlapShakeScalarMin = 0.10f;
    this->MinImpactVelocity = 50.00f;
    this->ImpactTriggerMinInterval = 0.20f;
    this->CrashSoundInterval = 0.75f;
    this->LandingImpactEffectMinInterval = 0.20f;
    this->MaxAngleForLandingImpact = 15.00f;
    this->MinZForceForLandingImpact = 100000.00f;
    this->AbilitySlot1 = NULL;
    this->AbilitySlot2 = NULL;
    this->VehicleAbility = NULL;
    this->BoostStartParticleOverride = NULL;
    this->BoostOngoingParticleOverride = NULL;
    this->BoostStopParticleOverride = NULL;
    this->bCarHornOn = false;
    this->RagdollEjectVelocityThreshold = 1400.00f;
    this->EjectionForce = 800.00f;
    this->RandomSpinForce = 300.00f;
    this->RightfulOwner = NULL;
    this->PassengerSlots = 1;
    this->bOverridePassengerSocketPrefix = false;
    this->bVehicleAirBorne = false;
    this->LastAirBorneTimeStamp = -1.00f;
    this->bIsReversing = false;
    this->bIsHandBraking = false;
    this->AutoInteractAtDuration = true;
    this->EnterAsPassengerTime = 0.50f;
    this->StatusEffectManager = CreateDefaultSubobject<UGGStatusEffectManager>(TEXT("StatusEffectManager"));
    this->WaitingForDriverName = NULL;
    this->DriverName = TEXT("None");
    this->OurCatcher = NULL;
    this->SoonToBeCatcher = NULL;
    this->FadeInMultiplier = 0.50f;
    this->FadeInMasterMaterial = NULL;
    this->bCanDoFadeIn = true;
    this->bInvokerActive = false;
    this->TileGenerationRadius = 2000.00f;
    this->TileRemovalRadius = 2500.00f;
    this->bActivateInterpolation = false;
    this->WheeledMoveComp = NULL;
    this->VehicleController = NULL;
    this->PlayerController = NULL;
    this->bCanBeLicked = true;
    this->bIsSimulatingPhysics = true;
    this->CurrentPawnCollisionEnabled = true;
    this->bIsVehicleCollisionEnabled = true;
    this->IsPooled = false;
    this->VehicleSpawner = NULL;
    this->OriginalOverridePhysMat = NULL;
    this->CurrentOverridePhysMat = NULL;
    this->BrakeAudio->SetupAttachment(RootComponent);
    this->Camera->SetupAttachment(CameraSpringArm);
    this->CameraSpringArm->SetupAttachment(RootComponent);
    this->CrashAudio->SetupAttachment(RootComponent);
    this->EngineAudio->SetupAttachment(RootComponent);
    this->HornAudio->SetupAttachment(RootComponent);
    this->LeftBackFeeler->SetupAttachment(RootComponent);
    this->LeftFeeler->SetupAttachment(RootComponent);
    this->MiddleFeeler->SetupAttachment(RootComponent);
    this->RightBackFeeler->SetupAttachment(RootComponent);
    this->RightFeeler->SetupAttachment(RootComponent);
    this->ScrapeAudio->SetupAttachment(RootComponent);
    this->ScrapeEffectComp->SetupAttachment(RootComponent);
    this->VehicleOverlapBox->SetupAttachment(RootComponent);
}

bool AGGVehicle::WasHeadbuttedRecently() const {
    return false;
}

void AGGVehicle::VehicleDisturbed() {
}

void AGGVehicle::UpdateLatestInstigator() {
}

void AGGVehicle::Turn(float Value) {
}

bool AGGVehicle::StartHold_Implementation() {
    return false;
}

void AGGVehicle::StartGhostControl() {
}

void AGGVehicle::StartFollowingSpline(UGGRoadSplineComponent* SplineComp, int32 StartIndex) {
}

void AGGVehicle::SlowDownVehicle(float SpeedMultiplier, float Duration) {
}

void AGGVehicle::SetVehicleSlowDownMultiplier(float Value) {
}

void AGGVehicle::SetVehicleInputDisabled(bool bNewDisabled) {
}

void AGGVehicle::SetVehicleEnabled(bool bEnable) {
}

void AGGVehicle::SetVehicleCollisionEnabled(bool bEnable) {
}

void AGGVehicle::SetVehicleAirBorne(bool bNewAirBorne) {
}

void AGGVehicle::SetVehicleAbilityActiveState(bool bNewActive) {
}

void AGGVehicle::SetSplineSpeed(float SplineSpeed) {
}

void AGGVehicle::SetSimulatePhysics(bool bActive) {
}

void AGGVehicle::SetPhysMatOverride(UPhysicalMaterial* NewOverride) {
}

void AGGVehicle::SetPawnCollisionEnabled(bool Enabled) {
}

void AGGVehicle::SetPathTargetActor(AActor* NewTargetActor) {
}

void AGGVehicle::SetPathTarget(FVector NewLocation) {
}

void AGGVehicle::SetOverrideMaterials(const TArray<FMatElement>& Materials) {
}

void AGGVehicle::SetOverrideMaterial(UMaterialInterface* Material) {
}

void AGGVehicle::SetNavAreaOn(bool bNewOn) {
}

void AGGVehicle::SetLatestInstigator_Implementation(APawn* InInstigator, FGameplayTag Interaction, float ClearAfter, bool bUnragdollReset) {
}

void AGGVehicle::SetInvokerActive(bool bNewActive) {
}

void AGGVehicle::SetForceNPCBrake(bool bNewBrake) {
}

void AGGVehicle::SetEngineOn(bool NewOn) {
}

void AGGVehicle::SetDesiredColorMaterialIndex(const int32 DesiredIndex) {
}

void AGGVehicle::SetCanBeLicked(bool NewCanBeLicked) {
}

void AGGVehicle::SetBackToDefaultMats_Implementation() {
}

void AGGVehicle::ServerSetReverse_Implementation(bool NewReverse) {
}
bool AGGVehicle::ServerSetReverse_Validate(bool NewReverse) {
    return true;
}

void AGGVehicle::ServerSetIsHandBraking_Implementation(bool NewBraking) {
}

void AGGVehicle::ServerRequestExitVehicle_Implementation(EExitReason ExitReason) {
}
bool AGGVehicle::ServerRequestExitVehicle_Validate(EExitReason ExitReason) {
    return true;
}

void AGGVehicle::ServerOnOverlappedCharacterRagdolled_Implementation(ACharacter* RagdollingCharacter) {
}
bool AGGVehicle::ServerOnOverlappedCharacterRagdolled_Validate(ACharacter* RagdollingCharacter) {
    return true;
}

void AGGVehicle::Scroll(bool Up) {
}

bool AGGVehicle::RoomForPassenger() {
    return false;
}

void AGGVehicle::Respawn() {
}

void AGGVehicle::ResetVehicleSlowDown() {
}

void AGGVehicle::ResetVehicle(bool WasDisturbed, bool CanReturnToGhost, bool ClearBB) {
}

void AGGVehicle::ResetOverrideMaterial() {
}

void AGGVehicle::ResetHealth() {
}

void AGGVehicle::ResetDesiredColorMaterialIndex() {
}

bool AGGVehicle::RemoveStatusEffect_Implementation(EStatusEffectTypes TypeToRemove) {
    return false;
}

void AGGVehicle::RecreatePhysicsState() {
}

bool AGGVehicle::PrepareForLick_Implementation() {
    return false;
}

void AGGVehicle::PoolVehicle() {
}

void AGGVehicle::PlayCrashSoundEffect(AActor* Actor, float ImpactSize) {
}

void AGGVehicle::PhysicsVolumeChanged(APhysicsVolume* NewVolume) {
}


void AGGVehicle::OverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AGGVehicle::OnRep_VehicleSpawner() {
}

void AGGVehicle::OnRep_UpdatePhysMat() {
}

void AGGVehicle::OnRep_Passengers() {
}

void AGGVehicle::OnRep_IsVehicleCollisionEnabled() {
}

void AGGVehicle::OnRep_IsSimulatingPhysics() {
}

void AGGVehicle::OnRep_IsPooled() {
}

void AGGVehicle::OnRep_HPState() {
}

void AGGVehicle::OnRep_EngineOn() {
}

void AGGVehicle::OnRep_Driver() {
}

void AGGVehicle::OnRep_DesiredColorMaterialIndex() {
}

void AGGVehicle::OnRep_CurrentStatusEffectMaterials() {
}

void AGGVehicle::OnRep_CurrentPawnCollisionEnabled() {
}

void AGGVehicle::OnRep_CurrentOverrideMaterials() {
}

void AGGVehicle::OnRep_CarHornOn() {
}

void AGGVehicle::OnOccupantCountChanged() {
}

void AGGVehicle::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
}

void AGGVehicle::OnAppearanceChanged(AGGVehicle* Vehicle, const FString& RowName, const FString& AppearanceString) {
}

void AGGVehicle::ObjectWasHeadbutted_Implementation(AGGGoat* HeadbuttingGoat) {
}

void AGGVehicle::MulticastVehicleImpulse_Implementation(FVector_NetQuantize LinearImpulse, FVector_NetQuantize AngularImpulse) {
}

void AGGVehicle::MulticastVehicleAbilityActivated_Implementation(FGameplayTagContainer AbilityTags) {
}

void AGGVehicle::MulticastTeleport_Implementation(FVector Location, FRotator Rotation) {
}

void AGGVehicle::MulticastMoveFadeIn_Implementation() {
}

void AGGVehicle::MulticastIgnitionSound_Implementation() {
}

void AGGVehicle::MulticastExplodeVehicle_Implementation() {
}

void AGGVehicle::MulticastEnterVehicle_Implementation(AGGCharacter* Character, bool bIsDriver, FName Socket, bool bBlendCamera) {
}

void AGGVehicle::MulticastCrashSound_Implementation(AActor* Actor, float ImpactSize) {
}

void AGGVehicle::LiftVehicleAbility() {
}

void AGGVehicle::LiftAbility2() {
}

void AGGVehicle::LiftAbility1() {
}

bool AGGVehicle::IsWheelInAir(int32 WheelIndex) {
    return false;
}

bool AGGVehicle::IsVehiclePooled() const {
    return false;
}

bool AGGVehicle::IsVehicleInputDisabled() const {
    return false;
}

bool AGGVehicle::IsVehicleInAir(bool DoDownTrace, float TraceLength) {
    return false;
}

bool AGGVehicle::IsNavAreaOn() const {
    return false;
}

bool AGGVehicle::IsLicked() const {
    return false;
}

bool AGGVehicle::IsInvokerActive() const {
    return false;
}

bool AGGVehicle::IsGoatInVehicle(AGGGoat* Goat) const {
    return false;
}

bool AGGVehicle::IsFlippedOver() const {
    return false;
}

bool AGGVehicle::IsEngineOn() const {
    return false;
}

bool AGGVehicle::IsCharacterAPassenger(const AGGCharacter* Character) const {
    return false;
}

bool AGGVehicle::InWater_Implementation() {
    return false;
}

bool AGGVehicle::Interact_Implementation(AActor* SourceActor, float HeldFor) {
    return false;
}

bool AGGVehicle::HasStatusEffectByType_Implementation(EStatusEffectTypes TypeToCheck) {
    return false;
}

bool AGGVehicle::HasStatusEffectByClass_Implementation(TSubclassOf<AGGStatusEffectBase> StatusEffectClass) {
    return false;
}

bool AGGVehicle::HasOccupants() const {
    return false;
}

bool AGGVehicle::HasGoatPassenger() {
    return false;
}

bool AGGVehicle::HasGoatDriver() const {
    return false;
}

AGGVehicleSpawner* AGGVehicle::GetVehicleSpawner() const {
    return NULL;
}

UPawnMovementComponent* AGGVehicle::GetVehicleMovement() const {
    return NULL;
}

UGGStatusEffectManager* AGGVehicle::GetStatusEffectManager_Implementation() {
    return NULL;
}

int32 AGGVehicle::GetSpeedKPH() const {
    return 0;
}

float AGGVehicle::GetRequiredHoldDuration_Implementation() {
    return 0.0f;
}

TArray<AGGPlayerController*> AGGVehicle::GetPlayersInVehicle() const {
    return TArray<AGGPlayerController*>();
}

UPhysicalMaterial* AGGVehicle::GetPhysMatOverride() const {
    return NULL;
}

APhysicsVolume* AGGVehicle::GetPhysicsVolume_Implementation() {
    return NULL;
}

TArray<AGGCharacter*> AGGVehicle::GetPassengerSlots() const {
    return TArray<AGGCharacter*>();
}

float AGGVehicle::GetNPCRecentInteractDelay_Implementation() {
    return 0.0f;
}

int32 AGGVehicle::GetNPCInteractionChance_Implementation() {
    return 0;
}

float AGGVehicle::GetMass() {
    return 0.0f;
}

TArray<FVector> AGGVehicle::GetLocalExitPointsForCharacter(const AGGCharacter* Character, int32 PointSeparation) const {
    return TArray<FVector>();
}

FVector AGGVehicle::GetLickInfo_Implementation(FVector LickLocation, FName& BoneName, FRotator& MeshLickRotation, FVector& RelativeLickLocation) {
    return FVector{};
}

UMeshComponent* AGGVehicle::GetLickableActorMeshComponent_Implementation() {
    return NULL;
}

FLatestInstigator AGGVehicle::GetLatestInstigatorStruct_Implementation() const {
    return FLatestInstigator{};
}

APawn* AGGVehicle::GetLatestInstigator_Implementation(FGameplayTag& OutInteractionType) const {
    return NULL;
}

FText AGGVehicle::GetInteractTextTitle_Implementation(AGGPlayerController* InteractingPlayerController) {
    return FText::GetEmpty();
}

FText AGGVehicle::GetInteractTextBody_Implementation(AGGPlayerController* InteractingPlayerController) {
    return FText::GetEmpty();
}

FVector AGGVehicle::GetExitLocation_K2(const AGGCharacter* Character, bool& bOutFoundFreeLocation) const {
    return FVector{};
}

UParticleSystemComponent* AGGVehicle::GetExhaustPSC() const {
    return NULL;
}

int32 AGGVehicle::GetDesiredColorMaterialIndex() {
    return 0;
}

EVehicleState AGGVehicle::GetCurrentState() const {
    return EVehicleState::VS_Idle;
}

FGameplayTag AGGVehicle::GetCurrentArea() const {
    return FGameplayTag{};
}

bool AGGVehicle::GetCollisionCheckBounds(FVector& Bounds, FVector& LocationOffset) const {
    return false;
}

USoundCue* AGGVehicle::GetBoostStartSound() {
    return NULL;
}

USoundCue* AGGVehicle::GetBoostLoopSound() {
    return NULL;
}

USoundCue* AGGVehicle::GetBoostEndSound() {
    return NULL;
}

bool AGGVehicle::GetAutoInteractPastDuration_Implementation() {
    return false;
}

TArray<AGGGoat*> AGGVehicle::GetAllGoatsInVehicle() const {
    return TArray<AGGGoat*>();
}

void AGGVehicle::GameplayCuesLoaded() {
}

void AGGVehicle::Forward(float Value) {
}

void AGGVehicle::ForceLickDrop() {
}

void AGGVehicle::ExplodeVehicle() {
}

void AGGVehicle::ExitVehicleAsPassenger(AGGCharacter* Character, EExitReason ExitReason) {
}

void AGGVehicle::ExitVehicle(EExitReason ExitReason) {
}


bool AGGVehicle::EndHold_Implementation(float HeldFor) {
    return false;
}

void AGGVehicle::EjectCharacter(bool bWasStolen, bool bEjectWithForce) {
}

void AGGVehicle::EjectAllPassengers() {
}

void AGGVehicle::DoAbilityFor(float Duration, int32 Ability) {
}

void AGGVehicle::DelayExplodeVehicle(float Duration) {
}

int32 AGGVehicle::CurrentPassengerAmount() {
    return 0;
}

void AGGVehicle::ClientBroadcastCrash_Implementation(AGGGoat* Goat, AActor* OtherActor) {
}

bool AGGVehicle::ClearStatusEffects_Implementation() {
    return false;
}



bool AGGVehicle::CanEnterVehicle(EValidDrivers DriverType) const {
    return false;
}

void AGGVehicle::CancelAbilities() {
}

bool AGGVehicle::CanBeLicked_Implementation() {
    return false;
}

bool AGGVehicle::CanBeInteractedWith_Implementation(AActor* SourceActor) {
    return false;
}

bool AGGVehicle::CanBeHeadbutted_Implementation(AGGGoat* HeadbuttingGoat) {
    return false;
}

void AGGVehicle::BrakeUp() {
}

void AGGVehicle::BrakeDown() {
}



AGGStatusEffectBase* AGGVehicle::ApplyStatusEffect_Implementation(EStatusEffectTypes TypeToApply, EApplicationMethod ApplicationMethod, AActor* SpreadFrom, TSubclassOf<AGGStatusEffectBase> StatusEffectClass, AGGStatusEffectBase* SpreadFromStatus) {
    return NULL;
}

void AGGVehicle::AddValueToVehicleSpeed(float Value) {
}

void AGGVehicle::AddValueToNPCVehSpeed(float Value) {
}

void AGGVehicle::ActorWasLicked_Implementation(AGGGoat* LickingGoat) {
}

void AGGVehicle::ActorStoppedBeingLicked_Implementation(AGGGoat* LickingGoat) {
}

void AGGVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGVehicle, CurrentState);
    DOREPLIFETIME(AGGVehicle, EngineOn);
    DOREPLIFETIME(AGGVehicle, bCanBeEntered);
    DOREPLIFETIME(AGGVehicle, Driver);
    DOREPLIFETIME(AGGVehicle, bVehicleInputDisabled);
    DOREPLIFETIME(AGGVehicle, bCanExplode);
    DOREPLIFETIME(AGGVehicle, bHasExploded);
    DOREPLIFETIME(AGGVehicle, HPState);
    DOREPLIFETIME(AGGVehicle, DesiredColorMaterialIndex);
    DOREPLIFETIME(AGGVehicle, CurrentStatusEffectMaterials);
    DOREPLIFETIME(AGGVehicle, CurrentOverrideMaterials);
    DOREPLIFETIME(AGGVehicle, bCarHornOn);
    DOREPLIFETIME(AGGVehicle, Passengers);
    DOREPLIFETIME(AGGVehicle, bIsReversing);
    DOREPLIFETIME(AGGVehicle, bIsHandBraking);
    DOREPLIFETIME(AGGVehicle, LickedBy);
    DOREPLIFETIME(AGGVehicle, CurrentActorName);
    DOREPLIFETIME(AGGVehicle, LatestInstigator);
    DOREPLIFETIME(AGGVehicle, OurCatcher);
    DOREPLIFETIME(AGGVehicle, bCanBeLicked);
    DOREPLIFETIME(AGGVehicle, bIsSimulatingPhysics);
    DOREPLIFETIME(AGGVehicle, CurrentPawnCollisionEnabled);
    DOREPLIFETIME(AGGVehicle, bIsVehicleCollisionEnabled);
    DOREPLIFETIME(AGGVehicle, IsPooled);
    DOREPLIFETIME(AGGVehicle, VehicleSpawner);
    DOREPLIFETIME(AGGVehicle, CurrentOverridePhysMat);
}



UAbilitySystemComponent* AGGVehicle::GetAbilitySystemComponent() const {
    return nullptr;
}