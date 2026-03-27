#include "BTService_GGCheckForCollision.h"

UBTService_GGCheckForCollision::UBTService_GGCheckForCollision() {
    this->NodeName = TEXT("Check For Collision");
    this->RequiredBoundsSize = 100.00f;
    this->bStopMovement = true;
    this->bLaunchBack = true;
    this->LaunchForce = 1000.00f;
}

void UBTService_GGCheckForCollision::OnNPCOverlappStatic(AGGNPC* NPC, AActor* OtherActor, UPrimitiveComponent* OtherComponent) {
}


