#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Notification.h"
#include "OnTutorialCompletedDelegate.h"
#include "OnTutorialRemovedDelegate.h"
#include "TutorialActionInputStruct.h"
#include "TutorialData.h"
#include "GGTutorial.generated.h"

class AGGGoat;
class AGGPlayerController;
class UGGTutorialComponent;
class UObject;

UCLASS(Blueprintable, NotPlaceable)
class GOAT2_API AGGTutorial : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TutorialID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyCompleteIfNotificationIsActive;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActiveByDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* TutorialObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialData TutorialData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTutorialCompleted OnTutorialCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTutorialRemoved OnTutorialRemoved;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerController* OwningController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNotification> CreatedNotificationIDs;
    
public:
    AGGTutorial(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateTutorial();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldShowTutorialActionInputStatic(AGGPlayerController* PC, FTutorialActionInputStruct ActionInput);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldShowTutorial(UGGTutorialComponent* TutorialComponent, UObject* InTutorialObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldCompleteTutorial();
    
    UFUNCTION(BlueprintCallable)
    void RemoveTutorial();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTutorialActivated(AGGPlayerController* PC, AGGGoat* Goat);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerControllerDestroyed(AActor* Actor);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnGoatReplaced(AGGGoat* OldGoat, AGGGoat* NewGoat);
    
    UFUNCTION(BlueprintCallable)
    void OnGamepadChanged(bool bInActive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTutorialShown();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FString GetTutorialID(UObject* InTutorialObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGTutorialComponent* GetTutorialComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FText> GetStepOverrideDescriptionArray();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<bool> GetStepCompletionArray();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGPlayerController* GetOwningPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGGoat* GetControlledGoat();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetCompletionTutorialStep(const FString& InID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGPlayerController*> GetAllOwningPlayers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGGoat*> GetAllControlledGoats();
    
    UFUNCTION(BlueprintCallable)
    void CreateTutorialNotification(FNotification Notification);
    
    UFUNCTION(BlueprintCallable)
    void CompleteTutorial();
    
    UFUNCTION(BlueprintCallable)
    bool ActivateTutorial();
    
};

