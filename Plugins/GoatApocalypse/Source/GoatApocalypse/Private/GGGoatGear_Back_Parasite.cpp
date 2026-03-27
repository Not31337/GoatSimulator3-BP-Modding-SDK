#include "GGGoatGear_Back_Parasite.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Back_Parasite::UGGGoatGear_Back_Parasite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxDistanceToGrabTarget = 50.00f;
    this->StretchFactor = 2.00f;
    this->MaxEatenTargets = 25;
    this->HeadOffsetSocket = TEXT("HeadOffset");
    this->HeadBone = TEXT("Head");
    this->HeadCenterSocket = TEXT("HeadCenter");
    this->MouthSocket = TEXT("Head");
    this->GrabTraceTargetSocket = TEXT("GrabTraceTarget");
    this->MeshBoneChains = NULL;
    this->ScaleIncreaseForEatenNPC = 0.50f;
    this->ScaleIncreaseForEatenVehicle = 1.00f;
    this->ScaleIncreaseForEatenPActor = 0.30f;
    this->DelayBetweenBites = 1.00f;
    this->RecoveryTimeAfterEating = 2.00f;
    this->TimeToSwallowTarget = 0.20f;
    this->ChewAnimMontage = NULL;
    this->ChanceToPickNewTarget = 0.30f;
    this->SearchForNewTargetAfterDuration = 5.00f;
    this->ReleaseImpulse = 500.00f;
    this->TargetScaleChangeSpeed = 5.00f;
    this->TagActorIsGrabbed = TEXT("Is grabbed by alien parasite");
    this->ChewAnimationStartTime = 0.33f;
    this->DelayBetweenReleasingEatenTargets = 0.20f;
    this->ApplyStatusEffectOnReleasedTargetsDelay = 0.20f;
    this->ThrowOutTargetParticles = NULL;
    this->OverlapSphere = NULL;
    this->PhysicsHandle = NULL;
    this->ParasiteTargetScale_Client = 1.00f;
    this->State = EGGParasiteState::Idle;
}

void UGGGoatGear_Back_Parasite::OnTargetingRangeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UGGGoatGear_Back_Parasite::OnRep_State() {
}

void UGGGoatGear_Back_Parasite::OnRep_ParasiteTargetScale_Client() {
}

void UGGGoatGear_Back_Parasite::OnRep_CurrentTarget() {
}

void UGGGoatGear_Back_Parasite::OnOwningGoatEnteredVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}

void UGGGoatGear_Back_Parasite::OnEatenTargetDestroyed(AActor* DestroyedActor) {
}

void UGGGoatGear_Back_Parasite::MulticastReleaseEatenTarget_Implementation(AActor* Target, FVector ReleaseLocation, FGGReleaseOptions Options) {
}

void UGGGoatGear_Back_Parasite::MulticastPlayChewAnimation_Implementation() {
}

void UGGGoatGear_Back_Parasite::MulticastEatGrabbedTarget_Implementation(AActor* Target, FGGCatchOptions Options) {
}

void UGGGoatGear_Back_Parasite::AnimNotify_MouthClosed() {
}

void UGGGoatGear_Back_Parasite::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Back_Parasite, EatenTargets);
    DOREPLIFETIME(UGGGoatGear_Back_Parasite, ParasiteTargetScale_Client);
    DOREPLIFETIME(UGGGoatGear_Back_Parasite, State);
    DOREPLIFETIME(UGGGoatGear_Back_Parasite, CurrentTarget);
}


