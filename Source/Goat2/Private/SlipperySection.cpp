#include "SlipperySection.h"

FSlipperySection::FSlipperySection() {
    this->StartIndex = 0;
    this->EndIndex = 0;
    this->SplineMeshComponent = NULL;
    this->DecalComponent = NULL;
    this->bOnFire = false;
    this->bFadedOut = false;
}

