#include "GGNPCHandcuffs.h"

AGGNPCHandcuffs::AGGNPCHandcuffs(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bStayActiveAfterHit = true;
    this->SpecialTargets.AddDefaulted(2);
    this->HandcuffedComponentType = NULL;
    this->ScanGoatRadius = 500.00f;
}


