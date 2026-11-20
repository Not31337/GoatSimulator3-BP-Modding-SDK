#include "GGNPCHandcuffs.h"
#include "Components/SphereComponent.h"

AGGNPCHandcuffs::AGGNPCHandcuffs(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bStayActiveAfterHit = true;
    this->SpecialTargets.AddDefaulted(2);
    this->HandcuffedComponentType = NULL;
    this->ScanGoatRadius = 500.00f;
    this->OnFloorLifetime = 10.00f;
    this->SphereCollider = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Collider"));
    this->SphereCollider->SetupAttachment(RootComponent);
}

void AGGNPCHandcuffs::HandleOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIdex, bool bFromSweep, const FHitResult& SweepResult) {
}



