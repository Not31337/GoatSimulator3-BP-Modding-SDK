#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "GGAudioFunctionLibrary.generated.h"

class AActor;
class UAudioComponent;
class UObject;
class USoundBase;
class USoundConcurrency;

UCLASS(Blueprintable)
class GOAT2_API UGGAudioFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGGAudioFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAudioComponent* SpawnUISound(const UObject* WorldContextObject, FGameplayTag SoundTag, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PlayUISound(const UObject* WorldContextObject, FGameplayTag SoundTag, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, AActor* OwningActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USoundBase* GetSoundFromTag(const UObject* WorldContextObject, FGameplayTag SoundTag);
    
};

