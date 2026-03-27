#pragma once
#include "CoreMinimal.h"
#include "GGGameInstanceSubsystem.h"
#include "OnSaveStartedDelegate.h"
#include "QueuedSavePopups.h"
#include "TrackedPlaytimeSession.h"
#include "GGPlayerProgressionSubsystem.generated.h"

class UGGInventory;
class UGGProgression;
class UWorld;

UCLASS(Blueprintable)
class GOAT2_API UGGPlayerProgressionSubsystem : public UGGGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGProgression* LocalProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGInventory* LocalInventory;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSaveStarted OnSaveStarted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrackedPlaytimeSession TrackedPlaytimeSession;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoSaveQuestsInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQueuedSavePopups> QueuedSaveCorruptionPopups;
    
public:
    UGGPlayerProgressionSubsystem();

    UFUNCTION(BlueprintCallable)
    void ResetGoatProgression();
    
    UFUNCTION(BlueprintCallable)
    void PreLoadMap(const FString& MapName);
    
    UFUNCTION(BlueprintCallable)
    void PostLoadMapWithWorld(UWorld* InWorld);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnIntroSplashComplete();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSaving() const;
    
};

