#include "GGMinimapSubsystem.h"

UGGMinimapSubsystem::UGGMinimapSubsystem() {
    this->PreLoadTilesToThisLOD = 2;
    this->MinimapDataAsset = NULL;
}

bool UGGMinimapSubsystem::HasMinimap() const {
    return false;
}

float UGGMinimapSubsystem::GetTextureScale() const {
    return 0.0f;
}

int32 UGGMinimapSubsystem::GetNumberOfLODs() const {
    return 0;
}

float UGGMinimapSubsystem::GetMapSize() const {
    return 0.0f;
}

UGGMinimapDataAsset* UGGMinimapSubsystem::GetDataAsset() const {
    return NULL;
}

float UGGMinimapSubsystem::GetCaptureRotation() const {
    return 0.0f;
}

FVector2D UGGMinimapSubsystem::GetCaptureOffset() const {
    return FVector2D{};
}


