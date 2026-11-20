#include "GGLoadNPCAppearance.h"

UGGLoadNPCAppearance::UGGLoadNPCAppearance() {
    this->WorldContextObject = NULL;
}

UGGLoadNPCAppearance* UGGLoadNPCAppearance::LoadNPCAppearance(const UObject* NewWorldContextObject, const TArray<FString>& NpcAppearance) {
    return NULL;
}

void UGGLoadNPCAppearance::ApplyLoadedAppearanceMaterials(UMeshComponent* PartComponent, EBodyParts Part, const FLoadedAppearancePart& LoadedPart, UMaterialInterface* SkinMat) {
}

void UGGLoadNPCAppearance::AppearanceLoaded() {
}


