#include "GGTShirt.h"
#include "Components/SphereComponent.h"
#include "GGStaticMeshComponent.h"

AGGTShirt::AGGTShirt(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UGGStaticMeshComponent>(TEXT("Mesh"))) {
    this->bStayActiveAfterHit = true;
    this->SpecialTargets.AddDefaulted(2);
    this->SphereCollider = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Collider"));
    this->TShirtMesh = NULL;
    this->NPCNeck = TEXT("Neck");
    this->NPCSpine = TEXT("Spine_01");
    this->NPCHips = TEXT("Hips");
    this->PlayerHead = TEXT("Neck");
    this->bChangePlayerAfterHit = true;
    this->BigFootRightShoe = NULL;
    this->BigFootLeftShoe = NULL;
    this->AchievementID = TEXT("AchievementBigFootID");
    this->AppearenceManager = NULL;
    this->SkinnedMeshComp = NULL;
    this->RandomGear = NULL;
    this->CachedGoat = NULL;
    this->SphereCollider->SetupAttachment(RootComponent);
}

void AGGTShirt::HandleOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIdex, bool bFromSweep, const FHitResult& SweepResult) {
}


