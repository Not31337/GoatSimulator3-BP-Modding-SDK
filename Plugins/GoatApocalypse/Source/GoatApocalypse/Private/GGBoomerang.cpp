#include "GGBoomerang.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AGGBoomerang::AGGBoomerang(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Collision Sphere"));
    this->CollisionSphere = (USphereComponent*)RootComponent;
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement"));
    this->RotationMovement = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("Rotation Movement"));
    this->AttachSocket = TEXT("AttachmentSocket");
    this->DelayReturnToOwningPlayer = 2.00f;
    this->ImpulseOnTargetHit = 700.00f;
    this->InstinctID = TEXT("Boomerang");
    this->MaterialWhileFlying = NULL;
    this->SpawnedMovementEffect = NULL;
    this->CurrentTarget = NULL;
    this->OwningAbility = NULL;
    this->Mesh->SetupAttachment(RootComponent);
}

void AGGBoomerang::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AGGBoomerang::MulticastLaunchBoomerang_Implementation() {
}

void AGGBoomerang::MulticastAttachBoomerangToGearpart_Implementation(bool bWasCatched) {
}

void AGGBoomerang::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGBoomerang, CurrentTarget);
}


