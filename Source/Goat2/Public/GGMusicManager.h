#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGGameInstanceSubsystem.h"
#include "GGMusicManager.generated.h"

class AGGGoat;
class UAudioComponent;
class UMusicTrack;
class UObject;

UCLASS(Abstract, Blueprintable)
class GOAT2_API UGGMusicManager : public UGGGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMusicTrack* SeamlessTravelTrack;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMusicTrack*> TrackStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMusicTrack* CurrentlyPlayingTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ChannelA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ChannelB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFadeInReverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UMusicTrack*, int32> ContinuousTrackStartTimes;
    
public:
    UGGMusicManager();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void WithdrawMusicTrackRequest(UObject* WorldContextObject, UMusicTrack* TrackRequest);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void RequestMusicTrack(UObject* WorldContextObject, UMusicTrack* TrackRequest);
    
    UFUNCTION(BlueprintCallable)
    void RemoveStartTimeForContinuousTrack(UMusicTrack* Track);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGoatAreaStateChange(AGGGoat* Goat, FGameplayTag AreaTag);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void OnCurrentLevelChanged(UObject* WorldContextObject, const FString& CurrentLevel, bool bIsTransitionLevel);
    
private:
    UFUNCTION(BlueprintCallable)
    void ClearNonPersistantTracks(const FString& CurrentLevel);
    
};

