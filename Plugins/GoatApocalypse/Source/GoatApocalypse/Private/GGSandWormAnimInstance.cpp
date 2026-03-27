#include "GGSandWormAnimInstance.h"

UGGSandWormAnimInstance::UGGSandWormAnimInstance() {
    this->TailBoneName = TEXT("Tail");
    this->BoneOffsetSocket = TEXT("BoneOffset");
    this->MainBodyRotationInterpSpeed = 5.00f;
    this->TailIKAlpha = 0.00f;
    this->WormOwner = NULL;
}


