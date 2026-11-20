#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EControllerState.h"
#include "GoatGameNightWebController.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATGAMENIGHT_API UGoatGameNightWebController : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControllerState LastState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControllerState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoldingInteract;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControllerState LastGameplayState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* LastInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoadingScreenCount;
    
public:
    UGoatGameNightWebController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNextScreen(EControllerState NextScreen);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerConnected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectControlStarted(UObject* Interactable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInteractableChanged(UObject* Interactable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitVehicle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitUFO();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnterVehicle(bool IsDriver);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnterUFO();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnterMenu(FGameplayTag InMenu);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInMenuState(EControllerState State);
    
};

