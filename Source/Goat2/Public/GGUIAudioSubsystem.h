#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "GGUIAudioSubsystem.generated.h"

class AActor;
class UAudioComponent;
class UDataTable;
class UGGUIAudioSoundSourcesDataAsset;
class UObject;
class USoundBase;
class USoundConcurrency;

UCLASS(Blueprintable, Config=Game)
class GOAT2_API UGGUIAudioSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> CachedDataTables;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UGGUIAudioSoundSourcesDataAsset> UIAudioLibrarySoundSources;
    
    UGGUIAudioSubsystem();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UAudioComponent* SpawnUISound(const UObject* WorldContextObject, FGameplayTag SoundTag, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void PlayUISound(const UObject* WorldContextObject, FGameplayTag SoundTag, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, AActor* OwningActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    USoundBase* GetSoundFromTag(const UObject* WorldContextObject, FGameplayTag SoundTag);
    
};

