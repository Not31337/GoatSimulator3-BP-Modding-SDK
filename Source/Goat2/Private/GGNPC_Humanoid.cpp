#include "GGNPC_Humanoid.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GGNPCAppearanceManager.h"
#include "GGRagdollableSkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AGGNPC_Humanoid::AGGNPC_Humanoid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(2);
    this->NotResilientToDamageTypes.AddDefaulted(1);
    this->CanChangeMood = true;
    this->TakeDamageNPCReactionWeights.AddDefaulted(3);
    this->PassedOutChancePerHit.AddDefaulted(3);
    this->bCanLookAt = true;
    this->AppearanceManager = CreateDefaultSubobject<UGGNPCAppearanceManager>(TEXT("Appearance Manager"));
    //this->Hair = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Hair"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    //this->UpperBody = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Upper Body"));
    //this->LowerBody = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Lower Body"));
    this->bGenerateAppearanceOnSpawn = false;
    this->bSetAppearanceToSetOnSpawn = false;
    this->OverrideAnimationBlueprint = NULL;
    this->CurrentMood = EMoods::M_None;
    this->MoodWhenDamagedDelay = 5.00f;
    this->bScaredWhenKnockedOut = true;
    this->InjectMoodTrees = false;
    this->MoodTrees.AddDefaulted(7);
    this->BehaviorDataContainer = NULL;
    this->bKeepClaimedByWhenRoam = false;
    this->bCanInvestigateAsRoaming = true;
    this->bCanCharacterInteractAsRoaming = true;
    this->bCanLookAtAsRoaming = true;
    this->bCanChangeMoodAsRoaming = true;
    this->CurrentWaypoint = NULL;
    this->HairShockMaterial = NULL;
    this->UpperBodyShockMaterial = NULL;
    this->LowerBodyShockMaterial = NULL;
    this->AccessoriesShockMaterial = NULL;
    this->CurrentEvent = NULL;
    this->CurrentCrowdType = ECrowdTypes::CT_None;
    this->CanBeInEvents = true;
    this->CanOnlyJoinEvent = NULL;
    this->MoodSpeeds.AddDefaulted(8);
    this->RightHandAttachmentSlot = NULL;
    this->LeftHandAttachmentSlot = NULL;
    this->CarryItemType = ECarryItemType::CIT_Normal;
    this->RightHandSocket = TEXT("HandSocket_Right");
    this->LeftHandSocket = TEXT("HandSocket_Left");
    this->CurrentlyPanicType = EPanicTypes::PT_None;
    this->bCanPanic = true;
    this->bCanCharacterInteract = true;
    this->HumanoidController = NULL;
    //this->Hair->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<UGGRagdollableSkeletalMeshComponent>(this));
    //this->LowerBody->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<UGGRagdollableSkeletalMeshComponent>(this));
    //this->UpperBody->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<UGGRagdollableSkeletalMeshComponent>(this));
}

void AGGNPC_Humanoid::StopPanicking() {
}

void AGGNPC_Humanoid::StartPanicking(EPanicTypes Type, FVector SourceLocation, AActor* SourceActor, bool bSkipVehicleCheck) {
}

void AGGNPC_Humanoid::SetInLoveWith(AActor* Target) {
}

void AGGNPC_Humanoid::SetCurrentCrowdType(ECrowdTypes NewType) {
}

void AGGNPC_Humanoid::SetAngryWithTarget(AActor* Target, bool SetAsDamagedBy) {
}

void AGGNPC_Humanoid::ReturnFromIdleNPCMode(bool AttemptToResetCollision) {
}

void AGGNPC_Humanoid::ResetNPCInteraction(bool bForOtherToo) {
}

void AGGNPC_Humanoid::ResetConversation(bool bForOtherToo, bool bStopCurrentVO, bool bStopHurt) {
}

void AGGNPC_Humanoid::OnRep_OverrideAnimationBlueprint() {
}

void AGGNPC_Humanoid::OnRep_GetCrowdAnimations() {
}

void AGGNPC_Humanoid::OnRep_CurrentWaypoint() {
}

void AGGNPC_Humanoid::OnRep_CurrentMood() {
}

void AGGNPC_Humanoid::OnRep_CurrentEvent() {
}

void AGGNPC_Humanoid::OnAppearanceLoadedAndSet(AGGNPC_Humanoid* NPC) {
}

void AGGNPC_Humanoid::MoodChange(EMoodChange Direction, int32 ChanceToChange, TArray<EMoods> SkipMoods, AActor* ByActor) {
}

bool AGGNPC_Humanoid::IsUsingOverrideAnimBP() const {
    return false;
}

bool AGGNPC_Humanoid::IsPanicking() const {
    return false;
}

bool AGGNPC_Humanoid::IsInEvent() const {
    return false;
}

bool AGGNPC_Humanoid::IsHoldingFoodOrDrink() const {
    return false;
}

bool AGGNPC_Humanoid::IsDisgusted() const {
    return false;
}

EPanicTypes AGGNPC_Humanoid::GetPanicType() const {
    return EPanicTypes::PT_None;
}

AGGAIController_Humanoid* AGGNPC_Humanoid::GetHumanoidController() {
    return NULL;
}

AGGNPCEvent* AGGNPC_Humanoid::GetCurrentEvent() const {
    return NULL;
}

ECrowdTypes AGGNPC_Humanoid::GetCurrentCrowdType() const {
    return ECrowdTypes::CT_None;
}

AGGEnvironmentalBehaviorContainer* AGGNPC_Humanoid::GetBehaviorDataContainer() const {
    return NULL;
}

void AGGNPC_Humanoid::FleeFromLocation(FVector FleeFrom) {
}

void AGGNPC_Humanoid::DetachHandSlot(bool DestroyActor, EAttachmentHandSlot HandSlot, bool TurnOnCollision, bool bForceCannotBecomeLostObject) {
}


AActor* AGGNPC_Humanoid::AttachStructToHand(FWeightedElement_ActorAttachment AttachmentStruct, ESameSocketAttach SameSocketAttachAction) {
    return NULL;
}

AActor* AGGNPC_Humanoid::AttachClassToHand_BP(TSubclassOf<AActor> ActorClassToAttach, EAttachmentHandSlot HandSlot, bool DropOnRagdoll, bool TakeDamage, FVector RelativeLocation, FRotator RelativeRotation, FVector ActorScale, UObject* MeshOverride, ECarryItemType CarryType, bool bCanBecomeLostObject, bool bCanDropOnStartle, ESameSocketAttach SameSocketAttachAction) {
    return NULL;
}

AActor* AGGNPC_Humanoid::AttachActorToHand_BP(AActor* ActorToAttach, EAttachmentHandSlot HandSlot, bool DropOnRagdoll, bool TakeDamage, FVector RelativeLocation, FRotator RelativeRotation, FVector ActorScale, ECarryItemType CarryType, bool bCanBecomeLostObject, bool bCanDropOnStartle, ESameSocketAttach SameSocketAttachAction) {
    return NULL;
}

void AGGNPC_Humanoid::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGNPC_Humanoid, OverrideAnimationBlueprint);
    DOREPLIFETIME(AGGNPC_Humanoid, CurrentMood);
    DOREPLIFETIME(AGGNPC_Humanoid, CurrentWaypoint);
    DOREPLIFETIME(AGGNPC_Humanoid, CurrentEvent);
    DOREPLIFETIME(AGGNPC_Humanoid, CurrentCrowdType);
    DOREPLIFETIME(AGGNPC_Humanoid, CarryItemType);
    DOREPLIFETIME(AGGNPC_Humanoid, CurrentlyPanicType);
}


