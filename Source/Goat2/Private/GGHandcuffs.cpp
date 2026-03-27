#include "GGHandcuffs.h"
#include "Components/SphereComponent.h"

AGGHandcuffs::AGGHandcuffs(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bStayActiveAfterHit = true;
    this->SpecialTargets.AddDefaulted(2);
    this->HandcuffedComponentType = NULL;
    this->SphereCollider = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Collider"));
    this->SphereCollider->SetupAttachment(RootComponent);
}

void AGGHandcuffs::HandleOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIdex, bool bFromSweep, const FHitResult& SweepResult) {
}



