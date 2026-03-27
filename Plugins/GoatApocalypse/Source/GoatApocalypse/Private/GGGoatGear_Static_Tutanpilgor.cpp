#include "GGGoatGear_Static_Tutanpilgor.h"

UGGGoatGear_Static_Tutanpilgor::UGGGoatGear_Static_Tutanpilgor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NPCTransformParticle = NULL;
    this->NPCTransformSound = NULL;
}

void UGGGoatGear_Static_Tutanpilgor::MulticastPlayTransformEffects_Implementation(const TArray<AGGNPC_Humanoid*>& NPCs) {
}


