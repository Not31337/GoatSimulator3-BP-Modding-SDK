#include "GGPortableJunkCannonCrate.h"
#include "GGRadialForceComponent.h"

AGGPortableJunkCannonCrate::AGGPortableJunkCannonCrate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->bCanBeInCluster = false;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->FallRate = 100.00f;
    this->LandedParticle = NULL;
    this->LandedNiagaraParticle = NULL;
    this->LandedSound = NULL;
    this->LandedCameraShake = NULL;
    this->CameraShakeRadius = 500.00f;
    this->ActorToSpawn = NULL;
    this->RadialForceComponent = CreateDefaultSubobject<UGGRadialForceComponent>(TEXT("RadialForce"));
    this->DownTraceDist = 50.00f;
    this->KillZ = -1000.00f;
    this->RadialForceComponent->SetupAttachment(RootComponent);
}


