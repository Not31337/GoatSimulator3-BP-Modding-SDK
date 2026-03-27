#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GameplayTagContainer.h"
#include "CreateNPCEventOutputPinDelegate.h"
#include "GGCreateNPCEvent.generated.h"

class AActor;
class AGGNPC;
class AGGNPCEvent;
class UGGCreateNPCEvent;
class UObject;

UCLASS(Blueprintable)
class GOAT2_API UGGCreateNPCEvent : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreateNPCEventOutputPin EventCreated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC* NPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
public:
    UGGCreateNPCEvent();

    UFUNCTION(BlueprintCallable)
    void NPCEventCreateDelegate(AGGNPCEvent* NPCEvent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGGCreateNPCEvent* CreateNPCEvent(const UObject* NewWorldContextObject, const FGameplayTag EventToCreate, const bool SpawnIntoArea, const FGameplayTag Area, AGGNPC* StartNPC, const FVector StartLocation, AActor* StartActor);
    
};

