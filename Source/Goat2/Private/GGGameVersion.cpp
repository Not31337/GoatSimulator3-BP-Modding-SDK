#include "GGGameVersion.h"

UGGGameVersion::UGGGameVersion() {
    this->BuildCL = TEXT("517119");
    this->BuildName = TEXT("1.3.0.0");
    this->SentryEnvironment = TEXT("Release");
    this->BuildConfiguration = TEXT("Shipping");
}

EGameVersion UGGGameVersion::Get() {
    return EGameVersion::Main;
}


