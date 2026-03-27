#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "OnTutorialCompletedDelegate.h"
#include "OnTutorialRemovedDelegate.h"
#include "Templates/SubclassOf.h"
#include "GGTutorialComponent.generated.h"

class AGGCharacter;
class AGGGoat;
class AGGPlayerController;
class AGGPlayerState;
class AGGQuestBase;
class AGGTutorial;
class AGGVehicle;
class APawn;
class UDataAsset;
class UDataTable;
class UGGInventory;
class UGGPlayerGameDataAsset;
class UObject;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, Within=GGPlayerController, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGTutorialComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> TutorialDataTablePaths;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> GlobalTutorialDataTablePaths;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTutorialCompleted OnTutorialCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTutorialRemoved OnTutorialRemoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGTutorial*> SpawnedTutorials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCreateDefaultTutorials;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> TutorialDataTables;
    
public:
    UGGTutorialComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SpawnVehicleTutorials(AGGCharacter* Character, AGGVehicle* Vehicle, bool bForcePassenger);
    
    UFUNCTION(BlueprintCallable)
    void OnTutorialDataTablesLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnSlowMotionToggled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void OnRepDriverChanged(AGGCharacter* NewDriver);
    
    UFUNCTION()
    void OnRepAttachmentReplication(const FRepAttachment& Attachment);
    
    UFUNCTION(BlueprintCallable)
    void OnQuestCompleted(AGGQuestBase* Quest, AGGPlayerState* OptionalPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnMovementModeChanged(TEnumAsByte<EMovementMode> CurrentMovement, uint8 CustomMovement, TEnumAsByte<EMovementMode> PrevMovement, uint8 PrevCustomMovement);
    
    UFUNCTION(BlueprintCallable)
    void OnMiniGameUnlocked(UGGPlayerGameDataAsset* UnlockedGame);
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryUnlockedStore(UDataAsset* Asset, FGameplayTag Context, AGGPlayerController* OptionalPC);
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryUnlocked(UDataAsset* Asset, FGameplayTag Context, AGGPlayerController* OptionalPC);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatExitedVehicleIsh(AGGGoat* Goat, APawn* FlyingBroom);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatEnteredVehicleIsh(AGGGoat* Goat, APawn* FlyingBroom);
    
    UFUNCTION(BlueprintCallable)
    void OnGearUnEquipped(AGGGoat* Goat, const TArray<TSubclassOf<USceneComponent>>& GearUnequipped);
    
    UFUNCTION(BlueprintCallable)
    void OnGearEquipped(AGGGoat* Goat, const TArray<TSubclassOf<USceneComponent>>& GearEquipped);
    
    UFUNCTION(BlueprintCallable)
    void OnGamepadChanged(bool bUsingGamepad);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterRespawned(AGGCharacter* OldCharacter, AGGCharacter* NewCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterExitedVehicle(AGGCharacter* Character, AGGVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterEnteredVehicle(AGGCharacter* Character, AGGVehicle* Vehicle);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGTutorial* GetSpawnedTutorialFromID(const FString& TutorialID, UObject* TutorialObject);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BindInventory(UGGInventory* Inventory);
    
public:
    UFUNCTION(BlueprintCallable)
    void BindGoat(AGGGoat* Goat);
    
};

