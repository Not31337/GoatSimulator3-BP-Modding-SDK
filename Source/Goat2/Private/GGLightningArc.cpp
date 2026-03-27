#include "GGLightningArc.h"
#include "Components/ArrowComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "LightningArcManager.h"

AGGLightningArc::AGGLightningArc(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bIsArcActive = true;
    this->ArcParticleSystem = NULL;
    this->ArcLengthParameterName = TEXT("Lightning_Bolt_Parameter");
    this->SoundEffect = NULL;
    this->ArcRadius = 100.00f;
    this->ShockDamage = 100.00f;
    this->CharacterImpulseForce = 800.00f;
    this->ImpulseForce = 18000.00f;
    this->ArcDistance = 1000.00f;
    this->LightningManagerClass = ALightningArcManager::StaticClass();
    this->bDebugDrawSphereTrace = false;
    this->ArcDirection = CreateDefaultSubobject<UArrowComponent>(TEXT("Arc Direction"));
    this->PreviewCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("PreviewCapsule"));
    this->ArcDirection->SetupAttachment(RootComponent);
    this->PreviewCapsule->SetupAttachment(RootComponent);
}

void AGGLightningArc::SetArcActive(bool bShouldBeActive) {
}

void AGGLightningArc::PulseArc() {
}

void AGGLightningArc::MulticastPlayVFX_Implementation(FVector_NetQuantize ImpactLocation) {
}


