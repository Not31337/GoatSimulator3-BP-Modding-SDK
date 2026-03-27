#include "Prefs.h"

UPrefs::UPrefs() {
}

void UPrefs::SetString(FName Key, const FString& Value) {
}

void UPrefs::SetInt(FName Key, int32 Value) {
}

void UPrefs::SetFloat(FName Key, float Value) {
}

void UPrefs::SetBool(FName Key, bool Value) {
}

TMap<FName, FString> UPrefs::GetStringMap() {
    return TMap<FName, FString>();
}

FString UPrefs::GetString(FName Key, const FString& Default) {
    return TEXT("");
}

TMap<FName, float> UPrefs::GetNumberMap() {
    return TMap<FName, float>();
}

int32 UPrefs::GetInt(FName Key, int32 Default) {
    return 0;
}

float UPrefs::GetFloat(FName Key, float Default) {
    return 0.0f;
}

UPrefsEvents* UPrefs::GetEvents() {
    return NULL;
}

TMap<FName, bool> UPrefs::GetBoolMap() {
    return TMap<FName, bool>();
}

bool UPrefs::GetBool(FName Key, bool Default) {
    return false;
}

void UPrefs::Del(FName Key) {
}


