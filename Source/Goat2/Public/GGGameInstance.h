#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Templates/SubclassOf.h"
#include "GGGameInstance.generated.h"

class AGGNPC_Animal;
class AGGNPC_Humanoid;
class UGGDLCHandler;
class UGGOnlineManager;
class UGameInstanceSubsystem;
class UObject;
class UUserWidget;
class UWorld;

UCLASS(Blueprintable, NonTransient)
class GOAT2_API UGGGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameInstanceSubsystem>> ManuallyIncludedSubsystems;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastKnownMapName;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinLoadTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LoadingScreenContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* TransitionMapLoadScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> StartupLoadingScreenWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> MenuLoadingScreenWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> LoadingScreenWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> LevelStartLoadingScreenWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBeenInMainMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInIntroSplash;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* LoadScreenWidgetRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGGOnlineManager* OnlineManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGGDLCHandler* DLCHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGNPC_Humanoid*> CachedHumanoidNPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGNPC_Animal*> CachedAnimalNPCs;
    
public:
    UGGGameInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldPlayStartupFlow() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void SendSessionInvite(const FString& DisplayName);
    
    UFUNCTION(BlueprintCallable)
    void PreLoadMap(const FString& MapName);
    
    UFUNCTION(BlueprintCallable)
    void PostLoadMapWithWorld(UWorld* World);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWorldCleanupEvent(UWorld* World, bool bSessionEnded, bool bCleanupResources);
    
    UFUNCTION(BlueprintCallable)
    void OnWorldCleanup(UWorld* World, bool bSessionEnded, bool bCleanupResources);
    
public:
    UFUNCTION(BlueprintCallable)
    void LinkSteamToEOSAccount_BP();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LinkAccount();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsRestartingLevel(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInTransitionMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInPlayableMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInMobileStartup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInMainMenuMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInIslandMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInBossFight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGOnlineManager* GetOnlineManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGDLCHandler* GetDLCHandler() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGNPC_Humanoid*> GetCachedHumanoidNPCs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGNPC_Animal*> GetCachedAnimalNPCs() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroySteamSession();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CreateSteamSession();
    
    UFUNCTION(BlueprintCallable)
    void BeginLoadingScreen(const FString& MapName);
    
};

