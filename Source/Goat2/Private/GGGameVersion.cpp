#include "GGGameVersion.h"

UGGGameVersion::UGGGameVersion() {
    this->BuildCL = TEXT("485636");
    this->BuildDate = TEXT("2026-04-13 12:15:11");
    this->BuildName = TEXT("1.2.1.1");
    this->SentryEnvironment = TEXT("Release");
}

EGameVersion UGGGameVersion::Get() {
    return EGameVersion::Main;
}


