#include "GGPhysicsActor_Base.h"
#include "GGStatusEffectManager.h"
#include "GGWaterFloatingComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AGGPhysicsActor_Base::AGGPhysicsActor_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    //this->bCanReceiveDecals = false;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->Tags.AddDefaulted(1);
    this->MeshComp = NULL;
    this->FloatingComp = CreateDefaultSubobject<UGGWaterFloatingComponent>(TEXT("Floating Comp"));
    this->DebugPrint = false;
    this->bDefaultToSimulatingPhysics = true;
    this->bStartSimulationOnHit = true;
    this->bStartSimOnHitWithVehicle = false;
    this->OurCatcher = NULL;
    this->bShowScaledBoundsDebug = false;
    this->IgnoredByNavMeshSize = 0.00f;
    this->OnHitDamageVelocityThreshold = 50.00f;
    this->bCanBeHeadbutted = true;
    this->Health = 100.00f;
    this->SpawnStatusEffectWhenDamaged = false;
    this->SpawnStatusAtHealth = 0.00f;
    this->StatusEffectToSpawn = EStatusEffectTypes::SET_None;
    this->OnlySpawnOnce = true;
    this->bCanDamageOnHit = true;
    this->HitDamage = 100.00f;
    this->CharacterImpulsePower = 600.00f;
    this->MinImpactSizeForCharDamage = 27000.00f;
    this->MinImpactSizeForGoatDamage = 48000.00f;
    this->MinImpactSizeForVehicleDamage = 53000.00f;
    this->VehicleDamage = 10.00f;
    this->bCanBeGrabbed = true;
    this->AttachedToActor = NULL;
    this->IsAttachedToSomething = false;
    this->ShouldDetach = false;
    this->bOverrideImpactEffectMeshSettings = false;
    this->ImpactEffectComp = NULL;
    this->DesiredColorMaterialIndex = -1;
    this->CanSwitchMat = true;
    this->bOverrideMeshNameInfo = false;
    this->StatusEffectManager = CreateDefaultSubobject<UGGStatusEffectManager>(TEXT("Status Effect Manager"));
    this->bCanBeOptimized = true;
    this->bCanChangeTickRate = true;
    this->bDefaultToSightVisible = false;
    this->ImpactAudioComponent = NULL;
    this->PawnCollisionOn = true;
    this->CollisionOn = true;
    this->CachedCulldistanceIdentifier = EPCSI_NotSpecified;
    this->OverriddenCullDistance = 0.00f;
    this->OverriddenSignificanceDistance = 0.00f;
    this->bHasBeenInitialized = false;
    this->HideSelf = false;
    this->CurrentOverridePhysMat = NULL;
    this->OriginalOverridePhysMat = NULL;
}

void AGGPhysicsActor_Base::StopPhysicsSimulation() {
}

void AGGPhysicsActor_Base::StartPhysicsSimulation() {
}

void AGGPhysicsActor_Base::StartedGrab(AGGCharacter* Character) {
}

void AGGPhysicsActor_Base::ShouldDetachFromParent(bool Detach, bool TurnOnCollision, bool MarkForDestruction) {
}

bool AGGPhysicsActor_Base::ShouldDefaultToSightVisible() const {
    return false;
}

void AGGPhysicsActor_Base::SetPhysMatOverride(UPhysicalMaterial* NewOverride) {
}

void AGGPhysicsActor_Base::SetPawnCollisionEnabled(bool NewEnabled) {
}

void AGGPhysicsActor_Base::SetPActorScale(FVector NewScale) {
}

void AGGPhysicsActor_Base::SetOriginalMatOverride(TArray<FMatElement> MatsOverride) {
}

void AGGPhysicsActor_Base::SetNewOverriddenSignificanceDistance(float NewOverridenSignificanceDistance) {
}

void AGGPhysicsActor_Base::SetNewOverriddenCullDistance(float NewOverridenCullDistance) {
}

void AGGPhysicsActor_Base::SetMultipleMaterial(TArray<FMatElement> MatElements) {
}

void AGGPhysicsActor_Base::SetMaterial(UMaterialInterface* Material) {
}

void AGGPhysicsActor_Base::SetLatestInstigator_Implementation(APawn* InInstigator, FGameplayTag Interaction, float ClearAfter, bool bUnragdollReset) {
}

bool AGGPhysicsActor_Base::SetGoatSimName_Implementation(const FText& NewName) {
    return false;
}

void AGGPhysicsActor_Base::SetDesiredColorMaterialIndex(int32 DesiredIndex) {
}

void AGGPhysicsActor_Base::SetCollisionProfile(const FName& CollisionProfileName) {
}

void AGGPhysicsActor_Base::SetCollisionEnabled(bool NewEnabled) {
}

void AGGPhysicsActor_Base::SetAISightVisible(bool bShouldBeVisible) {
}

void AGGPhysicsActor_Base::ResetOriginalMatOverride() {
}

void AGGPhysicsActor_Base::ResetMaterial() {
}

void AGGPhysicsActor_Base::ResetDesiredColorMaterialIndex() {
}

bool AGGPhysicsActor_Base::RemoveStatusEffect_Implementation(EStatusEffectTypes TypeToRemove) {
    return false;
}

void AGGPhysicsActor_Base::RemovePhysSimStartIgnoredActor(AActor* Actor) {
}

bool AGGPhysicsActor_Base::RemoveGoatSimNameModifier_Implementation(FGameplayTag ModifierTag) {
    return false;
}

bool AGGPhysicsActor_Base::PrepareForLick_Implementation() {
    return false;
}

void AGGPhysicsActor_Base::PhysicsVolumeChanged(APhysicsVolume* NewVolume) {
}


void AGGPhysicsActor_Base::OnTakeDamage_Multicast_Implementation(float DamageAmount, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) {
}

void AGGPhysicsActor_Base::OnRep_UpdatePhysMat() {
}

void AGGPhysicsActor_Base::OnRep_ShouldDetach() {
}

void AGGPhysicsActor_Base::OnRep_PawnCollisionOn() {
}

void AGGPhysicsActor_Base::OnRep_PActorScale() {
}

void AGGPhysicsActor_Base::OnRep_OriginalMatsOverride() {
}

void AGGPhysicsActor_Base::OnRep_HideSelf() {
}

void AGGPhysicsActor_Base::OnRep_DesiredColorMaterialIndex() {
}

void AGGPhysicsActor_Base::OnRep_CurrentStatusEffectMaterials() {
}

void AGGPhysicsActor_Base::OnRep_CurrentMatElements() {
}

void AGGPhysicsActor_Base::OnRep_CurrentCollisionProfile() {
}

void AGGPhysicsActor_Base::OnRep_CurrentActorName() {
}

void AGGPhysicsActor_Base::OnRep_CollisionOn() {
}

void AGGPhysicsActor_Base::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
}

void AGGPhysicsActor_Base::OnHideSelf_Implementation() {
}

void AGGPhysicsActor_Base::ObjectWasHeadbutted_Implementation(AGGGoat* HeadbuttingGoat) {
}

void AGGPhysicsActor_Base::NewCharacterAttachment(AGGCharacter* Character, bool TurnOffCollision) {
}

void AGGPhysicsActor_Base::NetWakeup(UPrimitiveComponent* SleepingComponent, FName BoneName) {
}

void AGGPhysicsActor_Base::NetGoDormant(UPrimitiveComponent* SleepingComponent, FName BoneName) {
}

void AGGPhysicsActor_Base::LetGo(AGGCharacter* Character, bool ResetCollision) {
}

bool AGGPhysicsActor_Base::IsHidingSelf() {
    return false;
}

bool AGGPhysicsActor_Base::IsGrabbed() const {
    return false;
}

bool AGGPhysicsActor_Base::InWater_Implementation() {
    return false;
}

bool AGGPhysicsActor_Base::HasStatusEffectByType_Implementation(EStatusEffectTypes TypeToCheck) {
    return false;
}

bool AGGPhysicsActor_Base::HasStatusEffectByClass_Implementation(TSubclassOf<AGGStatusEffectBase> StatusEffectClass) {
    return false;
}

void AGGPhysicsActor_Base::HandleConveyorMovement(FVector MoveDelta, ETeleportType TeleportType) {
}

UGGStatusEffectManager* AGGPhysicsActor_Base::GetStatusEffectManager_Implementation() {
    return NULL;
}

float AGGPhysicsActor_Base::GetSignificanceValue() const {
    return 0.0f;
}

UPhysicalMaterial* AGGPhysicsActor_Base::GetPhysMatOverride() const {
    return NULL;
}

APhysicsVolume* AGGPhysicsActor_Base::GetPhysicsVolume_Implementation() {
    return NULL;
}

float AGGPhysicsActor_Base::GetOverriddenSignificanceDistance() {
    return 0.0f;
}

float AGGPhysicsActor_Base::GetOverriddenCullDistance() {
    return 0.0f;
}

TArray<FMatElement> AGGPhysicsActor_Base::GetOriginalMatOverride() const {
    return TArray<FMatElement>();
}

FVector AGGPhysicsActor_Base::GetLickInfo_Implementation(FVector LickLocation, FName& BoneName, FRotator& MeshLickRotation, FVector& RelativeLickLocation) {
    return FVector{};
}

UMeshComponent* AGGPhysicsActor_Base::GetLickableActorMeshComponent_Implementation() {
    return NULL;
}

FLatestInstigator AGGPhysicsActor_Base::GetLatestInstigatorStruct_Implementation() const {
    return FLatestInstigator{};
}

APawn* AGGPhysicsActor_Base::GetLatestInstigator_Implementation(FGameplayTag& OutInteractionType) const {
    return NULL;
}

bool AGGPhysicsActor_Base::GetIsOptimized() const {
    return false;
}

FGameplayTagContainer AGGPhysicsActor_Base::GetIdentifierTags() {
    return FGameplayTagContainer{};
}

bool AGGPhysicsActor_Base::GetHasActorName_Implementation() {
    return false;
}

FText AGGPhysicsActor_Base::GetGoatSimName_Implementation(bool WithStyling) {
    return FText::GetEmpty();
}

FText AGGPhysicsActor_Base::GetFullGoatSimName_Implementation(bool WithStyling) {
    return FText::GetEmpty();
}

int32 AGGPhysicsActor_Base::GetDesiredColorMaterialIndex() {
    return 0;
}

FVector AGGPhysicsActor_Base::GetCenterOfMass() const {
    return FVector{};
}

FVector AGGPhysicsActor_Base::GetAdditionalRepelImpulseOverride(AGGGoat* RepelInflictingGoat, FVector HitTraceStart, FVector HitTraceEnd, FVector HitLocation) {
    return FVector{};
}


void AGGPhysicsActor_Base::ForceCharacterDrop(bool ResetCollision) {
}

bool AGGPhysicsActor_Base::ClearStatusEffects_Implementation() {
    return false;
}

bool AGGPhysicsActor_Base::CanBeLicked_Implementation() {
    return false;
}

bool AGGPhysicsActor_Base::CanBeHeadbutted_Implementation(AGGGoat* HeadbuttingGoat) {
    return false;
}

AGGStatusEffectBase* AGGPhysicsActor_Base::ApplyStatusEffect_Implementation(EStatusEffectTypes TypeToApply, EApplicationMethod ApplicationMethod, AActor* SpreadFrom, TSubclassOf<AGGStatusEffectBase> StatusEffectClass, AGGStatusEffectBase* SpreadFromStatus) {
    return NULL;
}

void AGGPhysicsActor_Base::AddPhysSimStartIgnoredActor(AActor* Actor) {
}

bool AGGPhysicsActor_Base::AddGoatSimNameModifier_Implementation(FGameplayTag ModifierTag, const FText& OverrideText) {
    return false;
}

void AGGPhysicsActor_Base::ActorWasLicked_Implementation(AGGGoat* LickingGoat) {
}

void AGGPhysicsActor_Base::ActorStoppedBeingLicked_Implementation(AGGGoat* LickingGoat) {
}

bool AGGPhysicsActor_Base::ActorSimulatingPhysics() const {
    return false;
}

void AGGPhysicsActor_Base::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGPhysicsActor_Base, bDefaultToSimulatingPhysics);
    DOREPLIFETIME(AGGPhysicsActor_Base, LatestInstigator);
    DOREPLIFETIME(AGGPhysicsActor_Base, OurCatcher);
    DOREPLIFETIME(AGGPhysicsActor_Base, GrabbedBy);
    DOREPLIFETIME(AGGPhysicsActor_Base, IsAttachedToSomething);
    DOREPLIFETIME(AGGPhysicsActor_Base, ShouldDetach);
    DOREPLIFETIME(AGGPhysicsActor_Base, DesiredColorMaterialIndex);
    DOREPLIFETIME(AGGPhysicsActor_Base, CurrentMatElements);
    DOREPLIFETIME(AGGPhysicsActor_Base, CurrentStatusEffectMaterials);
    DOREPLIFETIME(AGGPhysicsActor_Base, OriginalMatsOverride);
    DOREPLIFETIME(AGGPhysicsActor_Base, CurrentActorName);
    DOREPLIFETIME(AGGPhysicsActor_Base, PawnCollisionOn);
    DOREPLIFETIME(AGGPhysicsActor_Base, CollisionOn);
    DOREPLIFETIME(AGGPhysicsActor_Base, CurrentCollisionProfile);
    DOREPLIFETIME(AGGPhysicsActor_Base, HideSelf);
    DOREPLIFETIME(AGGPhysicsActor_Base, CurrentOverridePhysMat);
    DOREPLIFETIME(AGGPhysicsActor_Base, PActorScale);
}


