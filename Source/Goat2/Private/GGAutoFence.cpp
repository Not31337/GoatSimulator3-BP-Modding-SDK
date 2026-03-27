#include "GGAutoFence.h"
#include "Components/SplineComponent.h"
#include "Net/UnrealNetwork.h"

AGGAutoFence::AGGAutoFence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
    this->bSnapToGround = true;
    this->bForceLockedTransform = false;
    this->FenceSpline = CreateDefaultSubobject<USplineComponent>(TEXT("Fence Spline"));
    this->StartMesh = NULL;
    this->StartMeshComponent = NULL;
    this->EndMesh = NULL;
    this->EndMeshComponent = NULL;
    this->GroundCheckDistance = 150.00f;
    this->FenceComponentSpacing = 0.00f;
    this->FenceMeshForwardAxis = EAxis::X;
    this->FenceMeshUpAxis = EAxis::Z;
    this->FenceZOffset = 0.00f;
    this->bAlignYawAndRoll = true;
    this->InstanceCullStartDistance = 6000;
    this->InstanceCullEndFadeDistance = 6500;
    this->ReplicationDestroyDistCheck = 10.00f;
    this->DestroyedIndexesCount = 0;
    this->bAddGrindableSpline = false;
    this->GrindableSplineMeshForwardAxis = ESplineMeshAxis::X;
    this->GrindableSplineScale = 1.00f;
    this->bHideGrindSplineMeshAtRuntime = true;
    this->GrindableSplineComponent = NULL;
    this->bDestructible = false;
    this->bForceNotDestructible = false;
    this->bOverrideDestructibleInfo = false;
    this->HideSelf = false;
    this->bOverrideMeshNameInfo = false;
}

void AGGAutoFence::UpdateSettingsWithAssetUserData(UGGAutoFenceAssetUserData* UserData) {
}

void AGGAutoFence::SetupFence() {
}

void AGGAutoFence::OnRep_HideSelf() {
}

void AGGAutoFence::OnRep_DestroyedLocations() {
}

void AGGAutoFence::OnRep_CurrentActorName() {
}

void AGGAutoFence::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
}

void AGGAutoFence::OnEdgeTurnedPhysicsActor(AActor* OwningActor, UGGStaticMeshComponent* GGMeshComponent, AGGPhysicsActor_Base* PhysActor) {
}

void AGGAutoFence::OnDestructibleDestroyed_Implementation() {
}

void AGGAutoFence::ObjectWasHeadbutted_Implementation(AGGGoat* HeadbuttingGoat) {
}

void AGGAutoFence::FinishedLoadingDestructibleMeshes() {
}

void AGGAutoFence::DestroyFencePart_Implementation(FVector_NetQuantize Impulse, FVector_NetQuantize InstanceLocation) {
}

bool AGGAutoFence::CanBeHeadbutted_Implementation(AGGGoat* HeadbuttingGoat) {
    return false;
}

void AGGAutoFence::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGAutoFence, DestroyedInstanceLocations);
    DOREPLIFETIME(AGGAutoFence, HideSelf);
    DOREPLIFETIME(AGGAutoFence, CurrentActorName);
}


