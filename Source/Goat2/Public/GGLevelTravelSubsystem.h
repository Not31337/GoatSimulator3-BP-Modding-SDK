#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "GGGameInstanceSubsystem.h"
#include "OnLevelStartLoadingScreenRemovedDelegate.h"
#include "TravelSettings.h"
#include "GGLevelTravelSubsystem.generated.h"

class UNetDriver;
class UUserWidget;
class UWorld;

UCLASS(Blueprintable)
class GOAT2_API UGGLevelTravelSubsystem : public UGGGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTravelSettings CurrentLevelTravelSettings;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLevelStartLoadingScreenRemoved OnLevelStartLoadingScreenRemoved;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* LevelStartLoadScreenWidgetRef;
    
public:
    UGGLevelTravelSubsystem();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TravelTo_World(TSoftObjectPtr<UWorld> Destination, const FString& Options, FTravelSettings TravelSettings);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TravelTo_String(const FString& Destination, const FString& Options, FTravelSettings TravelSettings);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RestartLevel(FTravelSettings TravelSettings);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PreLoadMap(const FString& MapName);
    
    UFUNCTION(BlueprintCallable)
    void PreClientTravel(const FString& PendingURL, TEnumAsByte<ETravelType> TravelType, bool bIsSeamless);
    
    UFUNCTION(BlueprintCallable)
    void PostLoadMapWithWorld(UWorld* World);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void OpenLevel_World(TSoftObjectPtr<UWorld> Destination, const FString& Options, FTravelSettings TravelSettings);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void OpenLevel_String(const FString& Destination, const FString& Options, FTravelSettings TravelSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTraveling() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool HasEveryoneFinishedLoading(bool bIncludeTravelingPlayers);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleDisconnect(UWorld* InWorld, UNetDriver* NetDriver);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTravelSettings GetCurrentLevelTravelSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanInitiateRestart() const;
    
};

