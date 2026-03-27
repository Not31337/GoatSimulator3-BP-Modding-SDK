#include "GGCharacter.h"
#include "PhysicsEngine/PhysicalAnimationComponent.h"
#include "GGCharacterMovementComponent.h"
#include "GGCharacterPushComponent.h"
#include "GGRagdollableSkeletalMeshComponent.h"
#include "GGStatusEffectManager.h"
#include "GGStiffBonesComponent.h"
#include "GGWaterFloatingComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AGGCharacter::AGGCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UGGRagdollableSkeletalMeshComponent>(TEXT("CharacterMesh0")).SetDefaultSubobjectClass<UGGCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    //this->bCanReceiveDecals = false;
    this->Tags.AddDefaulted(1);
    this->bUseControllerRotationYaw = false;
    this->CharacterPushComponent = CreateDefaultSubobject<UGGCharacterPushComponent>(TEXT("CharacterPush"));
    this->StiffBonesComponent = CreateDefaultSubobject<UGGStiffBonesComponent>(TEXT("Stiff Bones Component"));
    this->PhysicalAnimationComp = CreateDefaultSubobject<UPhysicalAnimationComponent>(TEXT("Physical Animation Comp"));
    this->FloatingComp = CreateDefaultSubobject<UGGWaterFloatingComponent>(TEXT("Floating Comp"));
    this->bCanBeHeadbutted = true;
    this->bCanRespawn = true;
    this->StaticMeshRagdollImpactDelay = 0.25f;
    this->Mobile_RateOptimizationSignifanceRange = 0.00f;
    this->Mobile_RateOptimizationCheckRate = 0.00f;
    this->bCurrentMeshGravity = false;
    this->MinDestructibleBreakVel = 250.00f;
    this->bIsMoreResilient = false;
    this->ResilientHealthMax = 300.00f;
    this->CurrentResilientHealth = 0.00f;
    this->NotResilientToDamageTypes.AddDefaulted(1);
    this->bIgnoreGoatTackleDamageWhenResilient = true;
    this->bDisableStumbleFromGoatWhenResilient = false;
    this->bDisablePushFromGoatWhenResilient = false;
    this->bCannotBeLickedWhileResilient = true;
    this->bStumbleWhenResilient = true;
    this->StumbleSpeed = 500.00f;
    this->ResilientImpactParticle = NULL;
    this->ResilientImpactSound = NULL;
    this->bPhysicalAnimateRiding = false;
    this->MinLickBoneVolume = 600.00f;
    this->DesiredColorMaterialIndex = -1;
    this->ShockMaterial = NULL;
    this->BurnMaterial = NULL;
    this->bIsElectrified = false;
    this->AttachedToActorExterior = NULL;
    this->CurrentVehicle = NULL;
    this->DriverType = EValidDrivers::VD_Ghost;
    this->bChangeMeshLocationAsDriver = true;
    this->bChangeMeshLocationAsPassenger = false;
    this->bCanInteract = true;
    this->IsPerceivable = true;
    this->bInvokerActive = false;
    this->bCanBecomeNavInvoker = true;
    this->TileGenerationRadius = 0.00f;
    this->TileRemovalRadius = 0.00f;
    this->StatusEffectManager = CreateDefaultSubobject<UGGStatusEffectManager>(TEXT("StatusEffectManager"));
    this->OurCatcher = NULL;
    this->bCharacterCanBeLicked = true;
    this->CurrentTickEnabled = true;
    this->bCanEditPelvisName = true;
    this->CurrentOverridePhysMat = NULL;
    this->OriginalOverridePhysMat = NULL;
    const FProperty* p_Mesh = GetClass()->FindPropertyByName("Mesh");
    (*p_Mesh->ContainerPtrToValuePtr<USkeletalMeshComponent*>(this))->SetupAttachment(RootComponent);
}

void AGGCharacter::TeleportRagdoll(FVector NewLocation, bool bReplicate) {
}

void AGGCharacter::StopPhysAnimatingBelow(FName BodyName, bool IncludeSelf) {
}

void AGGCharacter::StopMontage(UAnimMontage* AnimMontage) {
}

void AGGCharacter::StartPhysAnimatingBelowSettings(FName BodyName, const FPhysicalAnimationData& Settings, bool IncludeSelf) {
}

void AGGCharacter::StartPhysAnimatingBelow(FName BodyName, EPhysAnimProfiles Profile, bool IncludeSelf, bool ClearNotFound) {
}

void AGGCharacter::SetStandupEnabled(bool NewEnabled) {
}

void AGGCharacter::SetRightHandScale(FVector InScale) {
}

void AGGCharacter::SetRightFootScale(FVector InScale) {
}

bool AGGCharacter::SetRagdollBlueprint(bool NewRagdoll, FRagdollStateChangeSettings& RagdollStateChangeSettings) {
    return false;
}

void AGGCharacter::SetPhysMatOverride(UPhysicalMaterial* NewOverride) {
}

void AGGCharacter::SetMultipleMaterial(TArray<FMatElement> MatElements) {
}

void AGGCharacter::SetMeshScale(FVector NewScale) {
}

void AGGCharacter::SetMeshCollision(FGameplayTag CollisionProfile) {
}

void AGGCharacter::SetMaterialLocally(UMaterialInterface* Material) {
}

void AGGCharacter::SetMaterial(UMaterialInterface* Material) {
}

void AGGCharacter::SetLeftHandScale(FVector InScale) {
}

void AGGCharacter::SetLeftFootScale(FVector InScale) {
}

void AGGCharacter::SetLatestInstigator_Implementation(APawn* InInstigator, FGameplayTag Interaction, float ClearAfter, bool bUnragdollReset) {
}

void AGGCharacter::SetIsResilient(bool bBeResilient) {
}

void AGGCharacter::SetIsPerceivable(bool NewPerceivable) {
}

void AGGCharacter::SetIsElectrified(bool IsElectrified) {
}

void AGGCharacter::SetIsAttachedToActorExterior(AActor* AttachedTo) {
}

void AGGCharacter::SetInvokerActive(bool bNewActive) {
}

void AGGCharacter::SetHeadScale(FVector InScale) {
}

void AGGCharacter::SetGravityScale(float GravityScale) {
}

void AGGCharacter::SetDesiredColorMaterialIndex(int32 DesiredIndex) {
}

void AGGCharacter::SetCurrentVehicle(AGGVehicle* NewVehicle) {
}

void AGGCharacter::SetCollisionProfiles(FGameplayTag CapsuleProfile, FGameplayTag MeshProfile) {
}

void AGGCharacter::SetClientMeshTranslationOffsetModifier(const FVector& Offset) {
}

void AGGCharacter::SetCharacterTick(bool Enabled) {
}

void AGGCharacter::SetCharacterCanBeLicked(bool NewCanBeLicked) {
}

void AGGCharacter::SetCapsuleCollision(FGameplayTag CollisionProfile) {
}

void AGGCharacter::SetCanToggleRagdoll(bool bCanToggle) {
}

void AGGCharacter::SetCanRespawn(bool NewCanRespawn) {
}

void AGGCharacter::SetCanInteract(bool NewCanInteract) {
}

void AGGCharacter::SetAvoidanceActive(bool bNewActive) {
}

void AGGCharacter::ServerLaunchGGCharacter_Implementation(FVector LaunchVelocity, bool XYOverride, bool ZOverride) {
}
bool AGGCharacter::ServerLaunchGGCharacter_Validate(FVector LaunchVelocity, bool XYOverride, bool ZOverride) {
    return true;
}

void AGGCharacter::ServerExitVehicle_Implementation(EExitReason ExitReason) {
}
bool AGGCharacter::ServerExitVehicle_Validate(EExitReason ExitReason) {
    return true;
}

void AGGCharacter::ServerDetachFromActorExterior_Implementation() {
}

void AGGCharacter::Respawn(bool BypassCheck) {
}

void AGGCharacter::ResetVelocity() {
}

void AGGCharacter::ResetToCurrentState() {
}

void AGGCharacter::ResetPhysicalAnimationProfiles(bool StopSimulation) {
}

void AGGCharacter::ResetMeshCollision(bool bResetToDefault) {
}

void AGGCharacter::ResetMaterialLocally() {
}

void AGGCharacter::ResetMaterial() {
}

void AGGCharacter::ResetDesiredColorMaterialIndex() {
}

void AGGCharacter::ResetCapsuleCollision(bool bResetToDefault) {
}

void AGGCharacter::ResetAllCollision(bool bResetToDefault) {
}

bool AGGCharacter::RemoveStatusEffect_Implementation(EStatusEffectTypes TypeToRemove) {
    return false;
}

void AGGCharacter::RemoveGrabbedByActor(AActor* GrabbedByActor) {
}

void AGGCharacter::RemoveEffectSources(FGameplayTag SourceTag, FGameplayTagContainer EffectTags) {
}

bool AGGCharacter::RemoveEffectSource(FGameplayTag SourceTag, FGameplayTag EffectTag) {
    return false;
}

void AGGCharacter::RemoveAllEffectSources() {
}

void AGGCharacter::RemoveAllEffectsFromSource(FGameplayTag SourceTag) {
}

bool AGGCharacter::PrepareForLick_Implementation() {
    return false;
}

void AGGCharacter::PlayMontage(UAnimMontage* AnimMontage, float InPlayRate) {
}

void AGGCharacter::OnUnRagdoll(bool bIsOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* UnRagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void AGGCharacter::OnRep_UpdatePhysMat() {
}

void AGGCharacter::OnRep_TickEnabled() {
}

void AGGCharacter::OnRep_ReplicatedEffectSources() {
}

void AGGCharacter::OnRep_MountedOnCharacter() {
}

void AGGCharacter::OnRep_MeshScale() {
}

void AGGCharacter::OnRep_IsPerceivable() {
}

void AGGCharacter::OnRep_DesiredColorMaterialIndex() {
}

void AGGCharacter::OnRep_CurrentVehicle(AGGVehicle* PreviousVehicle) {
}

void AGGCharacter::OnRep_CurrentMeshGravity() {
}

void AGGCharacter::OnRep_CollisionState() {
}

void AGGCharacter::OnRagdoll(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void AGGCharacter::OnHitMesh(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
}

void AGGCharacter::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
}

void AGGCharacter::OnAttachmentStateChanged(USceneComponent* Component) {
}

void AGGCharacter::ObjectWasHeadbutted_Implementation(AGGGoat* HeadbuttingGoat) {
}

void AGGCharacter::MulticastStopMontage_Implementation(UAnimMontage* AnimMontage) {
}

void AGGCharacter::MulticastPlayResilientImpactEffects_Implementation(FVector_NetQuantize DamageLocation) {
}

void AGGCharacter::MulticastPlayMontage_Implementation(UAnimMontage* AnimMontage, float InPlayRate) {
}

void AGGCharacter::MulticastOnEffectSourceChanged_Implementation(FGameplayTag EffectTag, bool IsAdded) {
}

void AGGCharacter::MulticastExitVehicle_Implementation(AGGVehicle* Vehicle, FVector Location, bool bWasDriver, bool bEjectingWithForce, bool bScaleWithVehicle) {
}

void AGGCharacter::MeshPhysicsVolumeChanged(APhysicsVolume* NewVolume) {
}

void AGGCharacter::MatShockCharacter(float Duration) {
}

void AGGCharacter::MatBurnCharacter(float Duration) {
}

void AGGCharacter::LaunchGGCharacter(FVector LaunchVelocity, bool XYOverride, bool ZOverride) {
}

bool AGGCharacter::IsSimulatingPhysics() const {
    return false;
}

bool AGGCharacter::IsRiding() const {
    return false;
}

bool AGGCharacter::IsResilientToDamageType(ETypeOfDamage DamageType) const {
    return false;
}

bool AGGCharacter::IsRagdoll() const {
    return false;
}

bool AGGCharacter::IsPassengerInVehicleIsh() const {
    return false;
}

bool AGGCharacter::IsPassenger() const {
    return false;
}

bool AGGCharacter::IsInvokerActive() const {
    return false;
}

bool AGGCharacter::IsGrabbedByNPC() const {
    return false;
}

bool AGGCharacter::IsGrabbedByGoat() const {
    return false;
}

bool AGGCharacter::IsGrabbedByActor(AActor* CheckActor) {
    return false;
}

bool AGGCharacter::IsDriverInVehicleIsh() const {
    return false;
}

bool AGGCharacter::IsDriver() const {
    return false;
}

bool AGGCharacter::IsBeingRidden() {
    return false;
}

bool AGGCharacter::IsAttachedToActor() const {
    return false;
}

bool AGGCharacter::InWater_Implementation() {
    return false;
}

bool AGGCharacter::InVehicleOrSimilar(bool bIncludeControllableObjects) const {
    return false;
}

bool AGGCharacter::InVehicle() const {
    return false;
}

bool AGGCharacter::HasStatusEffectByType_Implementation(EStatusEffectTypes TypeToCheck) {
    return false;
}

bool AGGCharacter::HasStatusEffectByClass_Implementation(TSubclassOf<AGGStatusEffectBase> StatusEffectClass) {
    return false;
}

bool AGGCharacter::HasLocalMaterialOverride() {
    return false;
}

bool AGGCharacter::HasEffectSourceWithTag(FGameplayTag SourceTag, FGameplayTag EffectTag) const {
    return false;
}

bool AGGCharacter::HasEffectSourceWithoutTags(const FGameplayTagContainer& ExcludeSourceTags, FGameplayTag EffectTag) const {
    return false;
}

bool AGGCharacter::HasEffectSource(FGameplayTag EffectTag) const {
    return false;
}

UGGStatusEffectManager* AGGCharacter::GetStatusEffectManager_Implementation() {
    return NULL;
}

FVector AGGCharacter::GetRightHandBoneScale() const {
    return FVector{};
}

FVector AGGCharacter::GetRightFootBoneScale() const {
    return FVector{};
}

UPhysicalMaterial* AGGCharacter::GetPhysMatOverride() const {
    return NULL;
}

APhysicsVolume* AGGCharacter::GetPhysicsVolume_Implementation() {
    return NULL;
}

AGGCharacter* AGGCharacter::GetMountedOnCharacter() const {
    return NULL;
}

UCapsuleComponent* AGGCharacter::GetMainOverlapComponent() const {
    return NULL;
}

FVector AGGCharacter::GetLickInfo_Implementation(FVector LickLocation, FName& BoneName, FRotator& MeshLickRotation, FVector& RelativeLickLocation) {
    return FVector{};
}

UMeshComponent* AGGCharacter::GetLickableActorMeshComponent_Implementation() {
    return NULL;
}

FVector AGGCharacter::GetLeftHandBoneScale() const {
    return FVector{};
}

FVector AGGCharacter::GetLeftFootBoneScale() const {
    return FVector{};
}

FLatestInstigator AGGCharacter::GetLatestInstigatorStruct_Implementation() const {
    return FLatestInstigator{};
}

APawn* AGGCharacter::GetLatestInstigator_Implementation(FGameplayTag& OutInteractionType) const {
    return NULL;
}

bool AGGCharacter::GetIsPerceivable() {
    return false;
}

FVector AGGCharacter::GetHeadBoneScale() const {
    return FVector{};
}

TArray<AActor*> AGGCharacter::GetGrabbedByActors() const {
    return TArray<AActor*>();
}

int32 AGGCharacter::GetDesiredColorMaterialIndex() {
    return 0;
}

APawn* AGGCharacter::GetCurrentVehicleIsh() const {
    return NULL;
}

FVector AGGCharacter::GetClientMeshLocModifier() const {
    return FVector{};
}

bool AGGCharacter::GetCharacterCanBeLicked() const {
    return false;
}

void AGGCharacter::ForceCharacterToBeDropped() {
}

void AGGCharacter::ExitVehicle(EExitReason ExitReason) {
}

void AGGCharacter::EnterVehicleAsPassenger(AGGVehicle* Vehicle, TArray<int32> AttemptToEnterSlots, bool bBlendCamera) {
}

void AGGCharacter::EnterVehicle(AGGVehicle* Vehicle, bool bBlendCamera) {
}


void AGGCharacter::DisableAllCollision() {
}

void AGGCharacter::DetachAllActorsFromMesh(bool DestroyActors, bool TurnOnCollision, bool bDetachFromRagdoll) {
}

void AGGCharacter::DetachActorFromMesh(AActor* ActorToDetach, bool DestroyActor, bool TurnOnCollision, bool bForceCannotBecomeLostObject, bool bRemoveInvalidActors) {
}

bool AGGCharacter::ClearStatusEffects_Implementation() {
    return false;
}

void AGGCharacter::ClearCurrentEffectMaterials() {
}

bool AGGCharacter::CanRespawn() const {
    return false;
}

bool AGGCharacter::CanRagdoll() const {
    return false;
}

bool AGGCharacter::CanInteract() const {
    return false;
}

bool AGGCharacter::CanBeLicked_Implementation() {
    return false;
}

bool AGGCharacter::CanBeHeadbutted_Implementation(AGGGoat* HeadbuttingGoat) {
    return false;
}

AActor* AGGCharacter::AttachClassToMesh_BP(TSubclassOf<AActor> ActorClass, FName SocketName, bool DropOnRagdoll, bool TakeDamage, FVector RelativeLocation, FRotator RelativeRotation, FVector ActorScale, UObject* MeshOverride, bool bCanBecomeLostObject, bool bCanDropOnStartle, ESameSocketAttach SameSocketAttachAction) {
    return NULL;
}

AActor* AGGCharacter::AttachActorToMesh_BP(AActor* ActorToAttach, FName SocketName, bool DropOnRagdoll, bool TakeDamage, FVector RelativeLocation, FRotator RelativeRotation, FVector ActorScale, bool bCanBecomeLostObject, bool bCanDropOnStartle, ESameSocketAttach SameSocketAttachAction) {
    return NULL;
}

AGGStatusEffectBase* AGGCharacter::ApplyStatusEffect_Implementation(EStatusEffectTypes TypeToApply, EApplicationMethod ApplicationMethod, AActor* SpreadFrom, TSubclassOf<AGGStatusEffectBase> StatusEffectClass, AGGStatusEffectBase* SpreadFromStatus) {
    return NULL;
}

void AGGCharacter::AddToGeneralSpeedMulti(float Value) {
}

void AGGCharacter::AddGrabbedByActor(AActor* GrabbedByActor) {
}

void AGGCharacter::AddEffectSources(FGameplayTag SourceTag, FGameplayTagContainer EffectTags) {
}

void AGGCharacter::AddEffectSource(FGameplayTag SourceTag, FGameplayTag EffectTag) {
}

void AGGCharacter::ActorWasLicked_Implementation(AGGGoat* LickingGoat) {
}

void AGGCharacter::ActorStoppedBeingLicked_Implementation(AGGGoat* LickingGoat) {
}

void AGGCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGCharacter, bCanRespawn);
    DOREPLIFETIME(AGGCharacter, bCurrentMeshGravity);
    DOREPLIFETIME(AGGCharacter, bIsMoreResilient);
    DOREPLIFETIME(AGGCharacter, CurrentResilientHealth);
    DOREPLIFETIME(AGGCharacter, MountedOnCharacter);
    DOREPLIFETIME(AGGCharacter, LatestInstigator);
    DOREPLIFETIME(AGGCharacter, GrabbedBy);
    DOREPLIFETIME(AGGCharacter, DesiredColorMaterialIndex);
    DOREPLIFETIME(AGGCharacter, AttachedToActorExterior);
    DOREPLIFETIME(AGGCharacter, CurrentVehicle);
    DOREPLIFETIME(AGGCharacter, bCanInteract);
    DOREPLIFETIME(AGGCharacter, HeadBoneScale);
    DOREPLIFETIME(AGGCharacter, IsPerceivable);
    DOREPLIFETIME(AGGCharacter, ReplicatedEffectSources);
    DOREPLIFETIME(AGGCharacter, CurrentActorName);
    DOREPLIFETIME(AGGCharacter, OurCatcher);
    DOREPLIFETIME(AGGCharacter, bCharacterCanBeLicked);
    DOREPLIFETIME(AGGCharacter, CurrentTickEnabled);
    DOREPLIFETIME(AGGCharacter, CurrentOverridePhysMat);
    DOREPLIFETIME(AGGCharacter, MeshScale);
}


