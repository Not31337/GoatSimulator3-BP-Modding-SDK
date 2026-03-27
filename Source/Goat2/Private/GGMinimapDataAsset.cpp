#include "GGMinimapDataAsset.h"

UGGMinimapDataAsset::UGGMinimapDataAsset() {
    this->NumberOfLODs = 0;
    this->MapSize = 0.00f;
    this->InitialCaptureHeight = 0.00f;
    this->MinimalCaptureHeight = 0.00f;
    this->CaptureRotation = 0.00f;
    this->TextureScale = 1.00f;
}

int32 UGGMinimapDataAsset::FindNumberOfLODs() const {
    return 0;
}


