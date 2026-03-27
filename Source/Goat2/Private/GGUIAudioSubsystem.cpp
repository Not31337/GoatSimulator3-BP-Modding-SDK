#include "GGUIAudioSubsystem.h"

UGGUIAudioSubsystem::UGGUIAudioSubsystem() {
}

UAudioComponent* UGGUIAudioSubsystem::SpawnUISound(const UObject* WorldContextObject, FGameplayTag SoundTag, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings) {
    return NULL;
}

void UGGUIAudioSubsystem::PlayUISound(const UObject* WorldContextObject, FGameplayTag SoundTag, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, AActor* OwningActor) {
}

USoundBase* UGGUIAudioSubsystem::GetSoundFromTag(const UObject* WorldContextObject, FGameplayTag SoundTag) {
    return NULL;
}


