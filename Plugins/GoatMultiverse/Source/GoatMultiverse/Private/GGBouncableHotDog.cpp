#include "GGBouncableHotDog.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GGBouncyStaticMeshComponent.h"
#include "GGDynamicAssetHoldingComponent.h"
#include "Net/UnrealNetwork.h"

AGGBouncableHotDog::AGGBouncableHotDog(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UGGBouncyStaticMeshComponent>(TEXT("Bouncable Mesh"));
    this->BouncableMesh = (UGGBouncyStaticMeshComponent*)RootComponent;
    this->AnimatedMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Animated Mesh"));
    this->DynamicAssetHolding = CreateDefaultSubobject<UGGDynamicAssetHoldingComponent>(TEXT("Dynamic Asset Holding"));
    this->RotationMovement = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("Rotation Movement"));
    this->bEnableRotation = true;
    this->bDestroyAfterPlayerBounced = false;
    this->bScaleUp = false;
    this->ScaleCurve = NULL;
    this->TimeToScaleUp = 1.00f;
    this->SpawnSound = NULL;
    this->DestroyDelay = 1.50f;
    this->DestroyParticles = TEXT("DestroyParticles");
    this->DestroySound = TEXT("DestroySound");
    this->DestroyScaleCurve = NULL;
    this->BounceSound = NULL;
    this->TargetRotationSpeed = 1.50f;
    this->BounceRotationSpeed = 12.00f;
    this->RotationAcceleration = 1.00f;
    this->BounceAnimation = NULL;
    this->AnimatedMesh->SetupAttachment(RootComponent);
}

void AGGBouncableHotDog::OnBounced(AActor* BouncedActor, UPrimitiveComponent* BouncedComponent, FVector BouncedVelocity) {
}

void AGGBouncableHotDog::OnBouncableMeshOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AGGBouncableHotDog::MulticastScaleDownForDestroy_Implementation() {
}

void AGGBouncableHotDog::MulticastPlaySpawnSound_Implementation() {
}

void AGGBouncableHotDog::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGBouncableHotDog, bDestroyAfterPlayerBounced);
    DOREPLIFETIME(AGGBouncableHotDog, bScaleUp);
    DOREPLIFETIME(AGGBouncableHotDog, SmoothNetInterpolate);
}


