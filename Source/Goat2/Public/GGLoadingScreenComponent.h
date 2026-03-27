#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "CurrentLoadingScreen.h"
#include "ELoadingScreenType.h"
#include "ERemovalReason.h"
#include "LoadingScreenParameters.h"
#include "OnLoadingScreenRemovedDelegate.h"
#include "Templates/SubclassOf.h"
#include "GGLoadingScreenComponent.generated.h"

class AGGGoat;
class AGGPlayerController;
class UGGGameInstance;
class UGGLevelTravelSubsystem;
class UGGTeleportLoadingScreen;
class ULevel;
class ULevelStreaming;
class USoundMix;
class UWorld;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGLoadingScreenComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoadingNPCAppearanceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoadingPhysicsActorsDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LevelStartFadeInDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundMix* LoadingSoundMixer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer EffectSourcesDuringLoadingScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MenuEffectSourceTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer WidgetTagsToHideInLoadingScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGTeleportLoadingScreen> LoadingScreenWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadingScreenRemoved OnLoadingScreenRemoved;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurrentLoadingScreen CurrentLoadingScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ULevelStreaming*, float> LevelStreamsStuckOnUnloaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerController* OwnerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoat* OwnerPlayerGoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGameInstance* GameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGLevelTravelSubsystem* LevelTravelSubsystem;
    
public:
    UGGLoadingScreenComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartLoadingScreen_TargetLocation(FVector TargetLocation, FLoadingScreenParameters Parameters);
    
    UFUNCTION(BlueprintCallable)
    void StartLoadingScreen_Duration(float Duration, FLoadingScreenParameters Parameters);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerFinishedLevelStart();
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveLoadingScreen(ERemovalReason RemovalReason, bool bForceDisableFadeIn);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelRemoved(ULevel* Level, UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelAdded(ULevel* Level, UWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InLoadingScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InLevelStartLoadingScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFinishedLoading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFinishedLevelStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELoadingScreenType GetCurrentLoadingScreenType() const;
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStartLoadingScreen_TargetLocation(FVector TargetLocation, FLoadingScreenParameters Parameters);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStartLoadingScreen_Duration(float Duration, FLoadingScreenParameters Parameters);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRemoveLoadingScreen(ERemovalReason RemovalReason, bool bForceDisableFadeIn);
    
};

