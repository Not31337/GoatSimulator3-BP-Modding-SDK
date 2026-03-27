#include "GGGoatFeatures.h"

UGGGoatFeatures::UGGGoatFeatures() {
    this->EnabledFeatures.AddDefaulted(10);
}

bool UGGGoatFeatures::IsFeatureEnabled(const FName FeatureName) {
    return false;
}


