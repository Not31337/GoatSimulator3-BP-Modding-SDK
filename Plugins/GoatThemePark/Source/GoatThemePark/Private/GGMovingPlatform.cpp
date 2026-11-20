#include "GGMovingPlatform.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "GGSplineMovementComponent.h"

AGGMovingPlatform::AGGMovingPlatform(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bSweepWhileMoving = false;
    this->bAdjustCameraYaw = true;
    this->bAdjustCameraPitch = true;
    this->bIgnoreClientMovementErrorChecksAndCorrectionEffectTag = false;
    this->bServerAcceptClientAuthoritativePositionEffectTag = false;
    this->SplineFollowComponent = CreateDefaultSubobject<UGGSplineMovementComponent>(TEXT("Spline Follow"));
    this->Root = (USceneComponent*)RootComponent;
    this->OverlapVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("Overlap Volume"));
    this->OverlapVolume->SetupAttachment(RootComponent);
}


