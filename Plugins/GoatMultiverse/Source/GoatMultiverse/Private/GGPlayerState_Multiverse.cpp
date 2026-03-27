#include "GGPlayerState_Multiverse.h"
#include "GGRiftUserComponent.h"

AGGPlayerState_Multiverse::AGGPlayerState_Multiverse(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RiftUserComponent = CreateDefaultSubobject<UGGRiftUserComponent>(TEXT("Rift User Component"));
}


