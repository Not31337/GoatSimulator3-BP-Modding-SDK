#include "GGNPC.h"
#include "Components/CapsuleComponent.h"
#include "Engine/EngineTypes.h"
#include "Particles/ParticleSystemComponent.h"
#include "EValidDrivers.h"
#include "GGNPCMovementComponent.h"
#include "GGVoiceOverComponent.h"
#include "Net/UnrealNetwork.h"

AGGNPC::AGGNPC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UGGNPCMovementComponent>(TEXT("CharMoveComp"))) {
    this->Tags.AddDefaulted(2);
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    this->NotResilientToDamageTypes.AddDefaulted(1);
    this->bPhysicalAnimateRiding = true;
    this->RidingPhysAnimBone = TEXT("Spine_01");
    this->RidingSitSocket = TEXT("SitSocket");
    this->DriverType = EValidDrivers::VD_NPC;
    this->OverlapCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Overlap Comp"));
    this->PassedOutParticleComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Passed Out Particle Comp"));
    this->VoiceOverComponent = CreateDefaultSubobject<UGGVoiceOverComponent>(TEXT("Voice Over Component"));
    this->NPCMoveComponent = NULL;
    this->BehaviorTree = NULL;
    this->NormalNetUpdateFrequency = 5.00f;
    this->RagdollNetUpdateFrequency = 30.00f;
    this->SignificanceManagerDistance = 3500.00f;
    this->bDestroyInsteadOfRespawnWhenFellOut = false;
    this->NPCType = ENPCType::NT_None;
    this->bIsDefaultClassOverride = false;
    this->bStartedAsEnvironmental = false;
    this->bStartedAsSpecial = false;
    this->bStartedAsProfessional = false;
    this->bImportantEnvironmental = false;
    this->bImportantAnimal = false;
    this->bHasBehaviorOverride = false;
    this->bForceManagerRelevant = false;
    this->bPlacedFromPool = false;
    this->SpawnedIntoVehicle = NULL;
    this->Gender = EGender::G_None;
    this->CanChangeMood = false;
    this->RecentlyStartledTimestamp = -339999995214436424907732413799364296704.00f;
    this->bCanProximityReact = true;
    this->bCanFaint = true;
    this->bCanInvestigate = true;
    this->CurrentNPCMaterialEffect = ENPCMaterialEffect::NME_None;
    this->CurrentMeshMaterial = NULL;
    this->LocalMaterialOverride = NULL;
    this->ShellEffectMesh = NULL;
    this->TakeDamageNPCReactionWeights.AddDefaulted(3);
    this->ReactionRadius = 600.00f;
    this->TakeDamagePanicType = EPanicTypes::PT_RunAwayAndHide;
    this->bIsKnockedOut = false;
    this->bIsPassedOut = false;
    this->bCanBeKnockedOut = true;
    this->DamageBeforeKnockedOut = 200.00f;
    this->RagdollWhenKnockedOut = true;
    this->bCanPassOut = true;
    this->bPassOutOnRagdoll = false;
    this->DamageBeforePassedOut = 300.00f;
    this->PassedOutChancePerHit.AddDefaulted(3);
    this->bReactAfterResilientStumble = false;
    this->CurrentWalkMode = ENPCMoveMode::NMM_Walking;
    this->NPCStandupDelay = 2.00f;
    this->MeshStationaryCheckValue = 10.00f;
    this->OtherCharacterVelocityToRagdoll = 50.00f;
    this->HurtWhenRagdollChance = 70;
    this->NPCNameDataTable = NULL;
    this->OrderOfNames = FText::FromString(TEXT("{FirstName} {LastName}"));
    this->bPreventRandomizeNameWhenOverride = false;
    this->StationaryAnimStartWait = 0.00f;
    this->StationaryAnimStartWaitDev = 0.00f;
    this->MovementBSOverride = NULL;
    this->bDropAnimationActors = false;
    this->PointAtTarget = NULL;
    this->bCanLookAt = false;
    this->bCanRandomlyLookAtNPC = true;
    this->ChanceToLookAtNPC = 25;
    this->bCanRandomlyLookAtGoat = true;
    this->ChanceToLookAtGoat = 75;
    this->LostObjectForgetDistance = 4000.00f;
    this->LostObjectForgetTime = 120.00f;
    this->FadeInMultiplier = 0.75f;
    this->DebugDrawAttack = false;
    this->PhysConstraint = NULL;
    this->PhysConstraintClass = NULL;
    this->CurrentAnimState = ENPCAnimationStates::NAS_None;
    this->GGController = NULL;
    this->IsPooled = false;
    this->NPCSpawner = NULL;
    this->bOverlapsAdjustableBySignificance = false;
    this->OverlapCapsule->SetupAttachment(RootComponent);
}

bool AGGNPC::WasRecentlyStartledByContext(FGameplayTag Context, float HowRecently) {
    return false;
}

bool AGGNPC::WasRecentlyStartledByActorAndContext(AActor* Actor, FGameplayTag Context, float HowRecently) {
    return false;
}

bool AGGNPC::WasRecentlyStartledByActor(AActor* Actor, float HowRecently) {
    return false;
}

bool AGGNPC::WasRecentlyStartled(float HowRecently) {
    return false;
}

void AGGNPC::UpdateNPCMoveSpeed() {
}

void AGGNPC::UpdateDrawDistance() {
}

void AGGNPC::UpdateDebugInfo() {
}

void AGGNPC::StopIdleState() {
}

void AGGNPC::StopCurrentVoiceline() {
}

void AGGNPC::StartInvestigation(FGameplayTag InvestigationType, AActor* Actor, FVector Location) {
}

void AGGNPC::StartIdleState(bool bResetAnimState, bool bStopMontages) {
}

void AGGNPC::SetReactionOnCooldown(FGameplayTag ReactionTag, float CooldownLength) {
}

void AGGNPC::SetRandomNPCName() {
}

void AGGNPC::SetPassedOut(bool bAttemptToRagdoll) {
}

void AGGNPC::SetOverlapCapsuleCollision(FGameplayTag CollisionProfile) {
}

void AGGNPC::SetNPCWalkMode(ENPCMoveMode NewMode) {
}

void AGGNPC::SetNPCStandupDelayOverride(float StandupDelay) {
}

void AGGNPC::SetNPCPropertyCollection(FNPCPropertyCollection InCollection) {
}

void AGGNPC::SetNPCIdentifierTags(FGameplayTagContainer NewTags) {
}

void AGGNPC::SetNPCDrawDistance(float NewDistance) {
}

void AGGNPC::SetNPCCollisionProfiles(FGameplayTag CapsuleProfile, FGameplayTag MeshProfile, FGameplayTag OverlapCapsuleProfile) {
}

void AGGNPC::SetNPCAnimationState(ENPCAnimationStates NewState) {
}

void AGGNPC::SetMood(EMoods Mood, bool InjectEvenIfSame, bool BypassCanChange) {
}

void AGGNPC::SetLookAtActorOverride(FLookAtOverride OverrideSettings) {
}

void AGGNPC::SetGender(EGender NewGender) {
}

void AGGNPC::SetCustomStateAnimSequences(TArray<FGGRandomPlayerSequenceEntry> NewAnimStateSequences) {
}

void AGGNPC::SetAvoidanceConsiderationRadius(float NewRadius) {
}

void AGGNPC::ResetVoiceAreas() {
}

void AGGNPC::ResetProximityReact() {
}

void AGGNPC::ResetPassedOut() {
}

void AGGNPC::ResetOverlapCapsuleCollision(bool bResetToDefault) {
}

void AGGNPC::ResetNPCStandupDelayOverride() {
}

void AGGNPC::ResetKnockedOut() {
}

void AGGNPC::ResetInvestigation() {
}

void AGGNPC::ResetForceMove() {
}

void AGGNPC::ResetAvoidanceConsiderationRadius() {
}

void AGGNPC::RemoveVoiceAreas(FGameplayTagContainer AreaTags) {
}

void AGGNPC::RemoveVoiceArea(FGameplayTag AreaTag) {
}

void AGGNPC::RemoveNPCIdentifierTags(FGameplayTagContainer RemoveTags) {
}

void AGGNPC::RemoveNPCIdentifierTag(FGameplayTag Tag) {
}

void AGGNPC::RemoveLostObject(AActor* LostActor) {
}

bool AGGNPC::RecentlyGrabbedCharacter(AGGCharacter* Character, float TimeToCheck) {
    return false;
}

void AGGNPC::PoolNPC() {
}

bool AGGNPC::PlayVoiceOver(FGameplayTag VoiceOverType, bool Replicate, bool bCanInterruptCurrentLine, bool bCanBeStoppedByDamage) {
    return false;
}

void AGGNPC::OverlapCompPhysicsVolumeChanged(APhysicsVolume* NewVolume) {
}

void AGGNPC::OverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AGGNPC::OnSkeletalMeshSet(USkeletalMesh* OldMesh, USkeletalMesh* NewMesh) {
}

void AGGNPC::OnRep_ReplicatedNameIndexes() {
}

void AGGNPC::OnRep_NPCSpawner_Implementation() {
}

void AGGNPC::OnRep_IsPassedOut() {
}

void AGGNPC::OnRep_GrabbedCharacter() {
}


void AGGNPC::OnRep_CurrentStatusEffectMaterials() {
}

void AGGNPC::OnRep_CurrentNPCMaterialEffect() {
}

void AGGNPC::OnRep_CurrentMeshMaterial() {
}

void AGGNPC::OnRep_CurrentAnimState() {
}

void AGGNPC::OnGrabbedCharacterUnRagdoll(bool bRagdollOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* UnRagdolledCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void AGGNPC::MulticastSpawnParticle_Implementation(UParticleSystem* Particle, FVector_NetQuantize Location, FRotator Rotation, UPrimitiveComponent* AttachToComponent, TEnumAsByte<EAttachLocation::Type> AttachLocation) {
}

void AGGNPC::MulticastPlaySound_Implementation(USoundBase* SoundEffect, bool AttachedToNPC) {
}

void AGGNPC::MulticastMoveFadeIn_Implementation() {
}

bool AGGNPC::IsStartled() const {
    return false;
}

bool AGGNPC::IsSignificant() const {
    return false;
}

bool AGGNPC::IsReactionOnCooldown(FGameplayTag ReactionTag) {
    return false;
}

bool AGGNPC::IsNPCPooled() const {
    return false;
}

bool AGGNPC::IsMoodIgnored(EMoods Mood) const {
    return false;
}

bool AGGNPC::IsLookAtBBValue() const {
    return false;
}

bool AGGNPC::IsHumanoid() {
    return false;
}

bool AGGNPC::IsHeadTurnStateBlocked(EHeadTurning State) const {
    return false;
}

bool AGGNPC::IsCivilian() const {
    return false;
}

bool AGGNPC::IsAnimal() const {
    return false;
}

bool AGGNPC::InIdleState() const {
    return false;
}

bool AGGNPC::InForceMoveTo() const {
    return false;
}

bool AGGNPC::HasRecentlyInteractedWith(AActor* InteractableActor, float CheckValue) {
    return false;
}

bool AGGNPC::HasNPCIdentifierTag(FGameplayTag Tag) {
    return false;
}

bool AGGNPC::HasLostObject(AActor* TestAgainst, bool bAlsoCheckArray) {
    return false;
}

bool AGGNPC::HasLookAtOverride() const {
    return false;
}

bool AGGNPC::HasGrabbedCharacter() const {
    return false;
}

void AGGNPC::GrabCharacter(AGGCharacter* Character, const FString& ConstraintAttachSocket, const FString& AttachBone, const FString& GrabBone, EGrabbedCharacterAnimationType AnimationType, FRotator AngularRotationOffset, FVector RelativeGoatPosition, FVector RelativeNPCPosition, float PreventUnragdollFor, bool bLockRotation) {
}

void AGGNPC::GrabbedNPCPooledOrMoved(AGGNPC* NPC, bool bWasPooled) {
}

void AGGNPC::GrabbedCharacterRespawned(AGGCharacter* OldCharacter, AGGCharacter* NewCharacter) {
}

float AGGNPC::GetTimeSinceMoodSet() {
    return 0.0f;
}

FGameplayTag AGGNPC::GetStartledContext() const {
    return FGameplayTag{};
}

FGameplayTag AGGNPC::GetProximityReactType() const {
    return FGameplayTag{};
}

float AGGNPC::GetNPCStandupDelayOverride() const {
    return 0.0f;
}

AGGNPCSpawner* AGGNPC::GetNPCSpawner() const {
    return NULL;
}

FNPCPropertyCollection AGGNPC::GetNPCPropertyCollection() {
    return FNPCPropertyCollection{};
}

UGGNPCMovementComponent* AGGNPC::GetNPCMoveComponent() const {
    return NULL;
}

ENPCAnimationStates AGGNPC::GetNPCAnimationState() const {
    return ENPCAnimationStates::NAS_None;
}

EMoods AGGNPC::GetMood() {
    return EMoods::M_None;
}

AActor* AGGNPC::GetLookAtActor() const {
    return NULL;
}

UMaterialInterface* AGGNPC::GetLocalMaterialOverride() {
    return NULL;
}

FGameplayTag AGGNPC::GetInvestigationType() const {
    return FGameplayTag{};
}

EHeadTurning AGGNPC::GetHeadTurnState() const {
    return EHeadTurning::HT_None;
}

FNPCGrabbedCharacter AGGNPC::GetGrabbedCharacterStruct() const {
    return FNPCGrabbedCharacter{};
}

EGrabbedCharacterAnimationType AGGNPC::GetGrabbedCharacterAnimationType() const {
    return EGrabbedCharacterAnimationType::NGCA_Default;
}

AGGCharacter* AGGNPC::GetGrabbedCharacter() const {
    return NULL;
}

AGGAIController* AGGNPC::GetGGController() {
    return NULL;
}

TArray<FGGRandomPlayerSequenceEntry> AGGNPC::GetCustomStateAnimSequences() const {
    return TArray<FGGRandomPlayerSequenceEntry>();
}

ENPCMoveMode AGGNPC::GetCurrentWalkMode() const {
    return ENPCMoveMode::NMM_Walking;
}

FGameplayTag AGGNPC::GetCurrentArea() const {
    return FGameplayTag{};
}

void AGGNPC::ForgetAllLostObjects() {
}

void AGGNPC::ForceMoveTo(FVector TargetLocation, FVector LookAtLocation, float WaitAtTarget, bool bResetAnimState) {
}

void AGGNPC::EmptyCustomStateAnimSequences() {
}

void AGGNPC::DropCharacter(bool bSetMeshProfile) {
}

void AGGNPC::ClearNPCIdentifierTags(bool bResetBackToDefaults) {
}

void AGGNPC::ClearLookAt() {
}






void AGGNPC::AttackAnimationsLoaded() {
}


void AGGNPC::AddVoiceAreas(FGameplayTagContainer AreaTags) {
}

void AGGNPC::AddVoiceArea(FGameplayTag AreaTag) {
}

void AGGNPC::AddNPCIdentifierTags(FGameplayTagContainer NewTags) {
}

void AGGNPC::AddNPCIdentifierTag(FGameplayTag Tag) {
}

void AGGNPC::AddLostObject(FLostObject LostObject, bool bInsertAtStart) {
}

void AGGNPC::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGNPC, NPCIdentifierTags);
    DOREPLIFETIME(AGGNPC, Gender);
    DOREPLIFETIME(AGGNPC, CurrentNPCMaterialEffect);
    DOREPLIFETIME(AGGNPC, CurrentMeshMaterial);
    DOREPLIFETIME(AGGNPC, CurrentStatusEffectMaterials);
    DOREPLIFETIME(AGGNPC, bIsPassedOut);
    DOREPLIFETIME(AGGNPC, CurrentWalkMode);
    DOREPLIFETIME(AGGNPC, NPCVoiceAreas);
    DOREPLIFETIME(AGGNPC, ReplicatedNameIndexes);
    DOREPLIFETIME(AGGNPC, BehaviorWalkCycleOverrides);
    DOREPLIFETIME(AGGNPC, BehaviorRunCycleOverrides);
    DOREPLIFETIME(AGGNPC, MovementBSOverride);
    DOREPLIFETIME(AGGNPC, bDropAnimationActors);
    DOREPLIFETIME(AGGNPC, HeadTurnState);
    DOREPLIFETIME(AGGNPC, PointAtTarget);
    DOREPLIFETIME(AGGNPC, CollisionState);
    DOREPLIFETIME(AGGNPC, GrabbedCharacter);
    DOREPLIFETIME(AGGNPC, CurrentAnimState);
    DOREPLIFETIME(AGGNPC, IsPooled);
    DOREPLIFETIME(AGGNPC, NPCSpawner);
}


