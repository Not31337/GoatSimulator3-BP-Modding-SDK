#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GGGameInstanceSubsystem.h"
#include "GGLobbyMember.h"
#include "RagdollStateChangeSettings.h"
#include "GGCrashReporterSubsystem.generated.h"

class AActor;
class ACharacter;
class AGGGoat;
class APlayerController;
class UGGAlternativeGoatDataAsset;
class ULSCharacterMovementComponent;
class UObject;
class USceneComponent;

UCLASS(Blueprintable, Config=Game)
class GOAT2_API UGGCrashReporterSubsystem : public UGGGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UGGCrashReporterSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateSessionInfo();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateAllPlayerInfos();
    
private:
    UFUNCTION(BlueprintCallable)
    void SetPlayerInfoContext();
    
    UFUNCTION(BlueprintCallable)
    void SetGameDataInCrashReporter();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWorldAreaChanged(AGGGoat* Goat, FGameplayTag NewArea);
    
    UFUNCTION(BlueprintCallable)
    void OnUnRagdoll(bool bRagdollOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* UnRagdolledCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
    UFUNCTION(BlueprintCallable)
    void OnRagdoll(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerLoginOrLogout(APlayerController* Player);
    
    UFUNCTION(BlueprintCallable)
    void OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyUpdated(const FGGLobbyMember& LobbyMember);
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyJoined(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void OnLickedChanged(AGGGoat* GoatLicking, AActor* LickedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnLeftLobby();
    
    UFUNCTION(BlueprintCallable)
    void OnGoatEndPlay(AActor* GoatActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatDestroyed(AActor* GoatActor);
    
    UFUNCTION(BlueprintCallable)
    void OnGearUpdated(AGGGoat* Goat, const TArray<USceneComponent*>& CurrentGoatGear);
    
    UFUNCTION(BlueprintCallable)
    void OnCatchedStateChanged(AActor* PrimaryGoatActor, AActor* Catcher);
    
    UFUNCTION(BlueprintCallable)
    void OnAltGoatChanged(AGGGoat* Goat, UGGAlternativeGoatDataAsset* NewAltGoat);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CaptureErrorEvent(UObject* WorldContextObject, const FString& Message);
    
};

