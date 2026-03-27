#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "AreaEventSpawners.h"
#include "EventActorCooldown.h"
#include "EventCooldown.h"
#include "EventSpawnElement.h"
#include "NPCEvents.h"
#include "StreetStallSpawner.h"
#include "Templates/SubclassOf.h"
#include "GGNPCEventManager.generated.h"

class AActor;
class AGGNPCEvent;
class UDataTable;
class UGGNPCEventManager;

UCLASS(Blueprintable, Config=Game)
class GOAT2_API UGGNPCEventManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EventsDataTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNPCEvents> GlobalDynamicEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceEventsRelevantFor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGNPCEvent*> ActiveEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGNPCEvent*> ActiveDynamicEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAreaEventSpawners> AreaEventSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEventSpawnElement> EventSpawnElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEventCooldown> EventCooldowns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEventActorCooldown> EventActorCooldowns;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStreetStallSpawner> StallSpawners;
    
    UGGNPCEventManager();

    UFUNCTION(BlueprintCallable)
    void RemoveEvent(AGGNPCEvent* EventToRemove, bool FromEndPlay);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllEvents(bool OnlyDynamicEvents);
    
private:
    UFUNCTION(BlueprintCallable)
    void NPCEventLoaded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventEnabled(FGameplayTag EventTag) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UGGNPCEventManager* GetNPCEventManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    bool GetEventsOfClass(TSubclassOf<AGGNPCEvent> EventClass, TArray<AGGNPCEvent*>& Events);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGNPCEvent*> GetActiveEvents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGNPCEvent*> GetActiveDynamicEvents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool EventOnCooldown_Tag(FGameplayTag EventTag, AActor* CooldownActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool EventOnCooldown(TSubclassOf<AGGNPCEvent> EventClass, AActor* CooldownActor);
    
};

