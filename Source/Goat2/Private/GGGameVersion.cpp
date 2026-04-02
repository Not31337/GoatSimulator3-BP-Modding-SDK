#include "GGGameVersion.h"

UGGGameVersion::UGGGameVersion() {
    this->BuildCL = TEXT("476053");
    this->BuildDate = TEXT("2026-02-25 16:23:21");
    this->BuildName = TEXT("1.2.1.0");
    this->SentryEnvironment = TEXT("Release");
}

EGameVersion UGGGameVersion::Get() {
    return EGameVersion::Main;
}


