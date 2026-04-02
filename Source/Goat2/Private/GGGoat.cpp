#include "GGGoat.h"
#include "Components/AudioComponent.h"
#include "Camera/CameraComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "AbilitySystemComponent.h"
#include "EValidDrivers.h"
#include "GGGoatAttributeSet.h"
#include "GGGoatGearManager.h"
#include "GGGoatGearPreviewManager.h"
#include "GGGoatMovementComponent.h"
#include "GGGoatSpringArmComponent.h"
#include "GGNeckRagdollComponent.h"
#include "GGRagdollableSkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AGGGoat::AGGGoat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UGGGoatMovementComponent>(TEXT("CharMoveComp"))) {
    this->Tags.AddDefaulted(3);
    this->bCannotBeLickedWhileResilient = false;
    this->bStumbleWhenResilient = false;
    this->bPhysicalAnimateRiding = true;
    this->RidingPhysAnimBone = TEXT("Spine_02");
    this->DriverType = EValidDrivers::VD_Player;
    this->bCanEditPelvisName = false;
    this->CameraBoom = CreateDefaultSubobject<UGGGoatSpringArmComponent>(TEXT("CameraBoom"));
    this->FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
    this->AbilitySystem = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystem"));
    this->GoatGearManager = CreateDefaultSubobject<UGGGoatGearManager>(TEXT("Goat Gear Manager"));
    this->GoatGearPreviewManager = CreateDefaultSubobject<UGGGoatGearPreviewManager>(TEXT("Goat Gear Preview Manager"));
    this->HornComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Horn Component"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->SkeletalHornComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Skeletal Horn Component"));
    this->BaaAudioComp = CreateDefaultSubobject<UAudioComponent>(TEXT("Baa Audio Comp"));
    this->GoatAttributeSet = CreateDefaultSubobject<UGGGoatAttributeSet>(TEXT("Goat Attribute Set"));
    this->NeckRagdollComponent = CreateDefaultSubobject<UGGNeckRagdollComponent>(TEXT("Neck Ragdoll Component"));
    this->PushOverlapComponent = NULL;
    this->DistanceConsideredToBeTeleport = 100.00f;
    this->StaticMeshImpactDelay = 0.25f;
    this->NPCHitGoatSound = NULL;
    this->MaxNearestWorldAreaDistance = 10000.00f;
    this->WorldAreaTeleportArea = NULL;
    this->CurrentGoatTower = NULL;
    this->LastEnteredGoatTower = NULL;
    this->CloseUpGoatMaterial = NULL;
    this->LandingCameraShakeClass = NULL;
    this->LandingCameraShakeTriggerVelocity = 750.00f;
    this->CameraDistanceAboveFollowBone = 20.00f;
    this->JumpParticle = NULL;
    this->PerfectLandParticle = NULL;
    this->PerfectLandSound = NULL;
    this->SpeedLinesCollection = NULL;
    this->GoatMovementComp = NULL;
    this->LocalMaterialOverride = NULL;
    this->MaterialParamCollection = NULL;
    this->MaterialParamCollectionInst = NULL;
    this->FoliageParameterZOffset = 0.00f;
    this->GFur = NULL;
    this->FurReplacementMesh = NULL;
    this->CurrentHornGear = NULL;
    this->DefaultHorn = NULL;
    this->CurrentAltGoat = NULL;
    this->HeadbuttAbility = NULL;
    this->HeadbuttAbilityInstance = NULL;
    this->bCanHeadbutt = true;
    this->ChargeHeadbuttAbility = NULL;
    this->ChargeHeadbuttAbilityInstance = NULL;
    this->ChargeHeadbuttStage = -1;
    this->BackKickAbility = NULL;
    this->BackkickAbilityInstance = NULL;
    this->LickPhysHandleComp = CreateDefaultSubobject<UPhysicsHandleComponent>(TEXT("LickHandleComponent"));
    this->ReversedLickPhysHandleComp = CreateDefaultSubobject<UPhysicsHandleComponent>(TEXT("ReversedPhysHandleComp"));
    this->TongueRetractionInterpSpeedAfterDropLick = 20.00f;
    this->TongueActive = 0.00f;
    this->LickAbility = NULL;
    this->bDisableGearPartsWhenBeingLicked = false;
    this->bCanLick = true;
    this->HeadbuttMontage = NULL;
    this->ChargeHeadbuttMontage = NULL;
    this->LickMontage = NULL;
    this->BackKickMontage = NULL;
    this->bCanAnimate = true;
    this->DefaultSlipperyDisableCCDTime = 1.00f;
    this->CurrentEmote = NULL;
    this->EmoteBlendOutTime = 0.40f;
    this->GrindParticlesComp = NULL;
    this->GrindSoundComp = CreateDefaultSubobject<UAudioComponent>(TEXT("Grind Sound Comp"));
    this->CurrentVehicleIsh = NULL;
    this->TeleportMaterialInstance = NULL;
    this->TeleportMatInstance = NULL;
    this->KarmaBigHeadParticle = NULL;
    this->KarmaSmallHeadParticle = NULL;
    this->KarmaBodyParticle = NULL;
    this->SmallKarmaRewardAudio = NULL;
    this->MediumKarmaRewardAudio = NULL;
    this->BigKarmaRewardAudio = NULL;
    this->MinKarmaAmountFullParticle = 1001;
    this->MaxKarmaAmountSmallParticle = 501;
    this->ChaosHeadParticle = NULL;
    this->ChaosBodyParticle = NULL;
    this->PostProcessingChaosTimer = 0.80f;
    this->DistanceAboveGoat = 100.00f;
    this->KarmaHeadParticleComp = NULL;
    this->GenericRagdolledHitTextFormat = FText::FromString(TEXT("<RED>Hit by</> {0}"));
    this->HitAnotherProjectileTextFormat = FText::FromString(TEXT("<YELLOW>Hit</> {0} <YELLOW>with</> {1}"));
    this->MountedByTextFormat = FText::FromString(TEXT("<BLUE>Mounted by</> {0}"));
    this->GrabbedByTextFormat = FText::FromString(TEXT("<BLUE>Grabbed by</> {0}"));
    this->AttackedByTextFormat = FText::FromString(TEXT("<RED>Kicked by</> {0}"));
    this->GGPlayerController = NULL;
    this->bHasBegunPlayLocally = false;
    this->AmountOfFishSlap = 0;
    this->AmountOfVentsTraveled = 0;
    this->AmountOfFireworksUsed = 0;
    this->AmountOfBusStopsDestroyed = 0;
    this->MiniGameComponent = NULL;
    this->BaaAudioComp->SetupAttachment(RootComponent);
    this->FollowCamera->SetupAttachment(CameraBoom);
    this->GrindSoundComp->SetupAttachment(RootComponent);
    //this->HornComponent->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<UGGRagdollableSkeletalMeshComponent>(this));
   // this->SkeletalHornComponent->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<UGGRagdollableSkeletalMeshComponent>(this));
}

void AGGGoat::UpdateFurQuality() {
}

void AGGGoat::ToggleLadderFootstepSounds(bool bOnLadder) {
}

void AGGGoat::StopCurrentEmote() {
}

void AGGGoat::SetUseCustomStencil(const bool bInUseCustomStencil, int32 CustomStencilIndex) {
}

void AGGGoat::SetTongueConstraintsLocked(bool ShouldBeLocked) {
}

void AGGGoat::SetOwnMeshesVisible(bool bVisible) {
}

void AGGGoat::SetNeckRagdollDisabled(bool bShouldBeDisabled) {
}

void AGGGoat::SetLickEnabled(bool NewEnabled) {
}

void AGGGoat::SetLastEnteredGoatTower(AGGGoatTower* GoatTower, bool bSaveInFile) {
}

void AGGGoat::SetHeadbuttEnabled(bool NewEnabled) {
}

void AGGGoat::SetGFurVisibility(bool bNewVisibility) {
}

void AGGGoat::SetCanAnimate(bool NewCanAnimate) {
}

void AGGGoat::SetCameraOverrideFocusRelativeLocation(FVector RelativeLocation, float BlendSpeed) {
}

void AGGGoat::SetCameraArmValues(float Min, float Max) {
}

void AGGGoat::SetBodyMat(TArray<FMatElement> NewBodyMaterials, UMaterialInterface* gFurMaterial) {
}

void AGGGoat::SetAltGoat(UGGAlternativeGoatDataAsset* NewGoat) {
}

void AGGGoat::SetAbilityOverride(TSubclassOf<UGGGoatAbility> AbilityOverride, EGoatAbilitySlot Slot) {
}

void AGGGoat::ServerStopCurrentEmote_Implementation(UGGGoatEmote* Emote) {
}
bool AGGGoat::ServerStopCurrentEmote_Validate(UGGGoatEmote* Emote) {
    return true;
}

void AGGGoat::ServerStartleNPCsOnPerfectJump_Implementation(AGGGoat* JumpingGoat, FVector Location) {
}

void AGGGoat::ServerStartleNPCsOnPerfecLanding_Implementation(AGGGoat* LandedGoat, FVector Location) {
}

void AGGGoat::ServerSetLickEnabled_Implementation(bool NewEnabled) {
}
bool AGGGoat::ServerSetLickEnabled_Validate(bool NewEnabled) {
    return true;
}

void AGGGoat::ServerSetInputDirection_Implementation(FVector_NetQuantize10 NewInputDirection) {
}
bool AGGGoat::ServerSetInputDirection_Validate(FVector_NetQuantize10 NewInputDirection) {
    return true;
}

void AGGGoat::ServerSetHeadbuttEnabled_Implementation(bool NewEnabled) {
}
bool AGGGoat::ServerSetHeadbuttEnabled_Validate(bool NewEnabled) {
    return true;
}

void AGGGoat::ServerRequestContraintBreak_Implementation() {
}

void AGGGoat::ServerPlayEmote_Implementation(UGGGoatEmote* Emote) {
}
bool AGGGoat::ServerPlayEmote_Validate(UGGGoatEmote* Emote) {
    return true;
}

void AGGGoat::ServerInteract_Implementation(UObject* InteractWith, float HeldFor) {
}
bool AGGGoat::ServerInteract_Validate(UObject* InteractWith, float HeldFor) {
    return true;
}

void AGGGoat::ServerExecuteGameplayCue_Implementation(const FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters) {
}

void AGGGoat::ServerDropLickedObject_Implementation() {
}
bool AGGGoat::ServerDropLickedObject_Validate() {
    return true;
}

void AGGGoat::ServerBegunPlayLocally_Implementation() {
}

void AGGGoat::ServerApplyStatusEffectToSelf_Implementation(EStatusEffectTypes StatusEffectType, EApplicationMethod ApplicationMethod, AActor* SpreadFrom, TSubclassOf<AGGStatusEffectBase> StatusEffectClass, AGGStatusEffectBase* SpreadFromStatus) {
}

void AGGGoat::SaveGameStartLocation(FVector Location) {
}

void AGGGoat::ResetToDefaultGoat() {
}

void AGGGoat::ResetToDefaultBodyMat() {
}

void AGGGoat::ResetOverrideCameraFocus() {
}

void AGGGoat::ResetCameraArmValues() {
}

void AGGGoat::ResetAbilityOverride(EGoatAbilitySlot Slot) {
}

void AGGGoat::RemoveMiniGamePlayerComponent() {
}

void AGGGoat::RemoveLickSoundSuppressor(FGameplayTag Tag) {
}

void AGGGoat::RemoveBaaOverride(FGameplayTag Source) {
}

void AGGGoat::ReEnableCCD() {
}

void AGGGoat::ReDetachCamera() {
}

void AGGGoat::PrepareForWorldInstanceSave(UGGWorldSave* WorldSaveInstance, bool& bNeedsToUpdateArea) {
}

void AGGGoat::PlayOnPerfectLandingEffects_Implementation(FVector Location) {
}

void AGGGoat::PlayOnGoatBouncyJumpEffects_Implementation(int32 JumpCount, FVector Location) {
}

void AGGGoat::PlayLandSound() {
}

void AGGGoat::PlayJumpSound() {
}

void AGGGoat::PlayEmote(UGGGoatEmote* Emote) {
}

void AGGGoat::PlayCameraShakeOnLanded(const FHitResult& Hit) {
}

void AGGGoat::OverrideCameraAttachment(USceneComponent* AttachToComponent) {
}

void AGGGoat::OverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AGGGoat::OnRep_LickedComponent() {
}

void AGGGoat::OnRep_HasBegunPlayLocally() {
}

void AGGGoat::OnRep_FurReplacementMesh() {
}

void AGGGoat::OnRep_CurrentVehicleIsh(APawn* PreviousVehicle) {
}

void AGGGoat::OnRep_CurrentStatusEffectMaterials() {
}

void AGGGoat::OnRep_CurrentOverrideBodyMaterials() {
}

void AGGGoat::OnRep_CurrentGoatTower(AGGGoatTower* LastGoatTower) {
}

void AGGGoat::OnRep_CurrentEffectMaterials() {
}

void AGGGoat::OnRep_CurrentBodyMaterials() {
}

void AGGGoat::OnRep_CurrentAltGoat() {
}

void AGGGoat::OnRep_ChargeHeadbuttStage() {
}

void AGGGoat::OnRep_CanAnimate() {
}

void AGGGoat::OnRemoveChaosPostProcessing() {
}

void AGGGoat::OnPerfectLanding(AGGGoat* Goat, FVector Location) {
}

void AGGGoat::OnPerfectJump(AGGGoat* Goat, FVector Location) {
}

void AGGGoat::OnMotorcycleAnimInstanceLayerLoaded() {
}

void AGGGoat::OnMeshPhysStateChanged(USkeletalMeshComponent* Component, bool bCreated) {
}

void AGGGoat::OnKarmaRewarded(AGGGoat* Goat, int32 Amount) {
}


void AGGGoat::OnGoatTeleported(AGGCharacter* Character, const FTransform& OldTransform) {
}

void AGGGoat::OnGoatBouncyJump(AGGGoat* Goat, int32 JumpCount, FVector Location) {
}

void AGGGoat::OnGearWasUpdated(AGGGoat* Goat, const TArray<USceneComponent*>& CurrentGoatGear) {
}



void AGGGoat::OnEffectsQualitySettingChanged(FGGGameSetting& InChangedSetting) {
}


void AGGGoat::OnChaosRewarded(int32 Amount) {
}

void AGGGoat::OnChaosAcquired(int32 Amount) {
}

void AGGGoat::OnAnimNotifyTrigger(AGGCharacter* Character, const UGGAnimNotify* AnimNotify, FGameplayTag NotifyTag) {
}

void AGGGoat::MulticastTeleportGoat_Implementation(FVector_NetQuantize Location, FRotator Rotation, const AActor* RelativeActor, ETeleportVehicleHandle VehicleHandle, bool bSetMoveMode, TEnumAsByte<EMovementMode> MoveMode, AGGVehicle* TeleportInto) {
}

void AGGGoat::MulticastSetMeshChannelResponse_Implementation(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> Response) {
}

void AGGGoat::MulticastReleaseFromCaption_Implementation() {
}

void AGGGoat::MulticastPlayEmoteMontage_Implementation(UGGGoatEmote* Emote) {
}

bool AGGGoat::IsPlayingHeadbuttAnimation() const {
    return false;
}

bool AGGGoat::IsNeckRagdoll() const {
    return false;
}

bool AGGGoat::IsLocallyControlledOrOwned() const {
    return false;
}

bool AGGGoat::IsLickSoundSuppressed() const {
    return false;
}

bool AGGGoat::IsLickingSomethingDangerous() {
    return false;
}

bool AGGGoat::IsInThroneRoom() {
    return false;
}

bool AGGGoat::IsInPlayerWorldArea(FGameplayTag TestPlayerWorldArea, bool bMatchChildren) {
    return false;
}

bool AGGGoat::IsEmoting() const {
    return false;
}

bool AGGGoat::IsChargingHeadbutt() const {
    return false;
}

bool AGGGoat::IsCameraAttachedToGoatRoot() const {
    return false;
}

bool AGGGoat::IsAbilityActiveWithTag(FGameplayTag Tag) {
    return false;
}

bool AGGGoat::IsAbilityActiveWithClass(TSubclassOf<UGameplayAbility> CheckClass) {
    return false;
}

void AGGGoat::Interact(UObject* InteractWith, float HeldFor) {
}

bool AGGGoat::InArea(FGameplayTag WorldArea) const {
    return false;
}

bool AGGGoat::HasOverrideCameraFocus() const {
    return false;
}

bool AGGGoat::HasBegunPlayLocally() const {
    return false;
}

bool AGGGoat::HasALickedObject() {
    return false;
}

bool AGGGoat::HasAbilityWithTag(FGameplayTag Tag) {
    return false;
}

void AGGGoat::HandleFootstepSound(FGameplayTag NotifyTag) {
}

void AGGGoat::GrindStarted(UGGGrindableSplineComponent* GrindSpline) {
}

void AGGGoat::GrindHyperspeedStarted(UGGGrindableSplineComponent* GrindSpline) {
}

void AGGGoat::GrindHyperspeedEnded(UGGGrindableSplineComponent* GrindSpline) {
}

void AGGGoat::GrindEnded() {
}

UPhysicsHandleComponent* AGGGoat::GetReverseLickPhysicsHandle() {
    return NULL;
}

TArray<FGameplayTag> AGGGoat::GetNearestPlayerWorldAreas(FVector GameStartLocation) {
    return TArray<FGameplayTag>();
}

UGGMiniGamePlayerComp* AGGGoat::GetMiniGamePlayerComponent() const {
    return NULL;
}

UMaterialInterface* AGGGoat::GetLocalMaterialOverride() {
    return NULL;
}

UPhysicsHandleComponent* AGGGoat::GetLickPhysicsHandle() {
    return NULL;
}

AActor* AGGGoat::GetLickedObject() const {
    return NULL;
}

FLickedComponent AGGGoat::GetLickedComponentStruct() {
    return FLickedComponent{};
}

UPrimitiveComponent* AGGGoat::GetLickedComponent() const {
    return NULL;
}

FBaaSoundOverride AGGGoat::GetHighestPrioBaaOverride() {
    return FBaaSoundOverride{};
}

AGGPlayerState* AGGGoat::GetGGPlayerState() const {
    return NULL;
}

AGGPlayerController* AGGGoat::GetGGPlayerController() const {
    return NULL;
}

UGGGoatGearPreviewManager* AGGGoat::GetGearPreviewManager() const {
    return NULL;
}

UGGGoatGearManager* AGGGoat::GetGearManager() const {
    return NULL;
}

FRotator AGGGoat::GetGearAimRotator() const {
    return FRotator{};
}

USkeletalMesh* AGGGoat::GetFurReplacementMesh() const {
    return NULL;
}

UGGFootstepComponent* AGGGoat::GetFootstepComponent_Implementation() {
    return NULL;
}

TArray<UGGGoatEmote*> AGGGoat::GetEquippedEmotes() const {
    return TArray<UGGGoatEmote*>();
}

FMatElement AGGGoat::GetDefaultHornMaterial() {
    return FMatElement{};
}

UGGGoatGearInfoDataAsset* AGGGoat::GetDefaultGoatInfoAsset() const {
    return NULL;
}

TArray<FMatElement> AGGGoat::GetDefaultBodyMaterials() {
    return TArray<FMatElement>();
}

UGGGoatGearInfoDataAsset* AGGGoat::GetDefaultBaaGear() const {
    return NULL;
}

UGGAlternativeGoatDataAsset* AGGGoat::GetDefaultAltGoat() const {
    return NULL;
}

TArray<FMatElement> AGGGoat::GetCurrentStatusEffectMaterials() {
    return TArray<FMatElement>();
}

TArray<FGameplayTag> AGGGoat::GetCurrentPlayerWorldAreas() const {
    return TArray<FGameplayTag>();
}

TArray<FMatElement> AGGGoat::GetCurrentOverrideBodyMaterials() {
    return TArray<FMatElement>();
}

FVector AGGGoat::GetCurrentInputDirection() const {
    return FVector{};
}

UGGGoatEmote* AGGGoat::GetCurrentEmote() const {
    return NULL;
}

TArray<FMatElement> AGGGoat::GetCurrentEffectMaterials() {
    return TArray<FMatElement>();
}

FVector2D AGGGoat::GetCurrentCameraArmValues() const {
    return FVector2D{};
}

TArray<FMatElement> AGGGoat::GetCurrentBodyMaterials() {
    return TArray<FMatElement>();
}

UGGAlternativeGoatDataAsset* AGGGoat::GetCurrentAltGoat() const {
    return NULL;
}

UAnimMontage* AGGGoat::GetAltGoatDefaultBaaMontage() {
    return NULL;
}

FVector AGGGoat::GetAdjustedTeleportLocation(FVector OriginLocation, bool bForceOffset, bool bIgnoreOtherGoats, float FloorCheckTraceDistOverride, float MaxHeightDifference, int32 MaxTries, float MaxRadius, float DistanceFromOtherPlayers) {
    return FVector{};
}

FGameplayAbilitySpecHandle AGGGoat::GetAbilitySpecHandleForSlot(EGoatAbilitySlot Slot) const {
    return FGameplayAbilitySpecHandle{};
}

void AGGGoat::EnableGearAbilityInput() {
}

void AGGGoat::EnableGearAbilitiesAndEffects() {
}

void AGGGoat::EnableAllGearAbilities(AActor* ThisGoat, AGGGoat* LickingGoat) {
}



void AGGGoat::DropLickedObject() {
}

void AGGGoat::DisableGearAbilitiesAndEffects() {
}

void AGGGoat::DisableAllGearAbilities(AActor* ThisGoat, AGGGoat* LickingGoat) {
}

UGGMiniGamePlayerComp* AGGGoat::CreateMiniGamePlayerComponent(TSubclassOf<UGGMiniGamePlayerComp> MiniGameCompClass) {
    return NULL;
}

void AGGGoat::ClientSnipedCharacterText_Implementation(const FText& CharName, const FText& PActorName) {
}

void AGGGoat::ClientRunnedOverText_Implementation(AGGVehicle* Vehicle) {
}

void AGGGoat::ClientMountedByText_Implementation(const FText& MountedByName) {
}

void AGGGoat::ClientLickedByText_Implementation(const FText& TextFormat, const FText& LickedByGoatName) {
}

void AGGGoat::ClientKickedByText_Implementation(const FText& TextFormat, const FText& KickedByGoatName) {
}

void AGGGoat::ClientHitByText_Implementation(const FText& HitByName) {
}

void AGGGoat::ClientHitAnotherProjectileText_Implementation(const FText& HitActorName, const FText& ProjectileName) {
}

void AGGGoat::ClientHeadbuttedByText_Implementation(const FText& TextFormat, const FText& HeadbuttedByGoatName) {
}

void AGGGoat::ClientGrabbedByText_Implementation(AGGNPC_Humanoid* Police) {
}

void AGGGoat::ClientAttackedByText_Implementation(const FText& TextFormat, const FText& AttackedByName) {
}

void AGGGoat::CapsuleCompPhysicsVolumeChanged(APhysicsVolume* NewVolume) {
}

bool AGGGoat::CanLick() {
    return false;
}

bool AGGGoat::CanHeadbutt() {
    return false;
}

void AGGGoat::CancelGearAbilitiesAndDisableInput() {
}

void AGGGoat::CancelAbilityWithTag(FGameplayTag Tag) {
}

bool AGGGoat::CanAnimate() const {
    return false;
}

void AGGGoat::BroadcastHeadbuttEvents_Server_Implementation(const TArray<UPrimitiveComponent*>& HeadbuttedPrimComps, const TArray<AActor*>& HeadbuttedActors, bool bIsChargeHeadbutt) {
}
bool AGGGoat::BroadcastHeadbuttEvents_Server_Validate(const TArray<UPrimitiveComponent*>& HeadbuttedPrimComps, const TArray<AActor*>& HeadbuttedActors, bool bIsChargeHeadbutt) {
    return true;
}

void AGGGoat::BroadcastHeadbuttEvents_Multicast_Implementation(const TArray<UPrimitiveComponent*>& HeadbuttedPrimComps, const TArray<AActor*>& HeadbuttedActors, bool bIsChargeHeadbutt) {
}

void AGGGoat::BroadcastGoatBaa() {
}

void AGGGoat::BroadcastBackKickEvents_Server_Implementation(const TArray<UPrimitiveComponent*>& HeadbuttedPrimComps, const TArray<AActor*>& KickedActors) {
}
bool AGGGoat::BroadcastBackKickEvents_Server_Validate(const TArray<UPrimitiveComponent*>& HeadbuttedPrimComps, const TArray<AActor*>& KickedActors) {
    return true;
}

void AGGGoat::BroadcastBackKickEvents_Multicast_Implementation(const TArray<UPrimitiveComponent*>& BackkickedPrimComps, const TArray<AActor*>& KickedActors) {
}


void AGGGoat::AddLickSoundSuppressor(FGameplayTag Tag) {
}

void AGGGoat::AddBaaOverride(FGameplayTag Source, USoundBase* BaaSound, int32 Priority) {
}

void AGGGoat::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGGoat, CurrentGoatTower);
    DOREPLIFETIME(AGGGoat, InputDirection);
    DOREPLIFETIME(AGGGoat, CurrentEffectMaterials);
    DOREPLIFETIME(AGGGoat, CurrentOverrideBodyMaterials);
    DOREPLIFETIME(AGGGoat, CurrentStatusEffectMaterials);
    DOREPLIFETIME(AGGGoat, CurrentBodyMaterials);
    DOREPLIFETIME(AGGGoat, CurrentgFurMaterial);
    DOREPLIFETIME(AGGGoat, FurReplacementMesh);
    DOREPLIFETIME(AGGGoat, CurrentAltGoat);
    DOREPLIFETIME(AGGGoat, bCanHeadbutt);
    DOREPLIFETIME(AGGGoat, ChargeHeadbuttAbilityInstance);
    DOREPLIFETIME(AGGGoat, ChargeHeadbuttStage);
    DOREPLIFETIME(AGGGoat, BaaSoundOverrides);
    DOREPLIFETIME(AGGGoat, LickedComponent);
    DOREPLIFETIME(AGGGoat, LickPhysHandleComp);
    DOREPLIFETIME(AGGGoat, ReversedLickPhysHandleComp);
    DOREPLIFETIME(AGGGoat, bCanLick);
    DOREPLIFETIME(AGGGoat, LickSoundSuppressors);
    DOREPLIFETIME(AGGGoat, bCanAnimate);
    DOREPLIFETIME(AGGGoat, CollisionState);
    DOREPLIFETIME(AGGGoat, CurrentVehicleIsh);
    DOREPLIFETIME(AGGGoat, bHasBegunPlayLocally);
    DOREPLIFETIME(AGGGoat, MiniGameComponent);
}


UAbilitySystemComponent* AGGGoat::GetAbilitySystemComponent() const {
    return nullptr;
}