#include "GGAudioFunctionLibrary.h"

UGGAudioFunctionLibrary::UGGAudioFunctionLibrary() {
}

UAudioComponent* UGGAudioFunctionLibrary::SpawnUISound(const UObject* WorldContextObject, FGameplayTag SoundTag, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings) {
    return NULL;
}

void UGGAudioFunctionLibrary::PlayUISound(const UObject* WorldContextObject, FGameplayTag SoundTag, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, AActor* OwningActor) {
}

USoundBase* UGGAudioFunctionLibrary::GetSoundFromTag(const UObject* WorldContextObject, FGameplayTag SoundTag) {
    return NULL;
}


