#include "GGNavLinkProxy_Jump.h"

AGGNavLinkProxy_Jump::AGGNavLinkProxy_Jump(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PointLinks.AddDefaulted(1);
    this->JumpMultiplier = 1.00f;
    this->JumpArc = 0.50f;
}

void AGGNavLinkProxy_Jump::SmartLinkReached(AActor* MovingActor, const FVector& DestinationPoint) {
}


