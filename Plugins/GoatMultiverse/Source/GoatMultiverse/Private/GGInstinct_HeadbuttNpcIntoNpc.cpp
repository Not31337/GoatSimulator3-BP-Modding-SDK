#include "GGInstinct_HeadbuttNpcIntoNpc.h"

AGGInstinct_HeadbuttNpcIntoNpc::AGGInstinct_HeadbuttNpcIntoNpc(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuestProgressTiers.AddDefaulted(1);
}

void AGGInstinct_HeadbuttNpcIntoNpc::OnHeadbuttedNPCUnRagdoll(bool bRagdollOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* UnRagdolledCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void AGGInstinct_HeadbuttNpcIntoNpc::OnHeadbuttedNpcHitSomething(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AGGInstinct_HeadbuttNpcIntoNpc::OnGoatHeadbuttingActor(AGGGoat* Goat, AActor* Actor) {
}


