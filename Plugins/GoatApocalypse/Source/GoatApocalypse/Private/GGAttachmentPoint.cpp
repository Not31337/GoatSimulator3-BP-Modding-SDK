#include "GGAttachmentPoint.h"
#include "Net/UnrealNetwork.h"

UGGAttachmentPoint::UGGAttachmentPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OverlapArea = NULL;
    this->bIsAttachmentPointEnabled = true;
}

void UGGAttachmentPoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGAttachmentPoint, bIsAttachmentPointEnabled);
}


