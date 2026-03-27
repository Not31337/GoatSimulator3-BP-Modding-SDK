#include "GGGameVersion.h"

UGGGameVersion::UGGGameVersion() {
    this->BuildCL = TEXT("462744");
    this->BuildDate = TEXT("2025-12-10 13:22:25");
    this->BuildName = TEXT("1.2.0.4");
    this->SentryEnvironment = TEXT("Release");
}

EGameVersion UGGGameVersion::Get() {
    return EGameVersion::Main;
}


