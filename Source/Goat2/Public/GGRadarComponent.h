#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "ETowerSynchronizationEvent.h"
#include "RadarCoordinateData.h"
#include "Templates/SubclassOf.h"
#include "GGRadarComponent.generated.h"

class AActor;
class AGGGoat;
class AGGGoatTower;
class AGGPlayerController;
class AGGPlayerState;
class AGGQuestBase;
class AGGRadarPointActor;
class UGGQuestManager;
class UGGRadarSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGRadarComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRadarSystem* RadarSystem;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGRadarPointActor> DefaultNearestEventClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StylizedDistanceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText StylizedDistanceTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StylizedDistanceMaxDigits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StylizedDistanceMinDigits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StylizedDistanceCutoffDistance;
    
public:
    UGGRadarComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateRadarData(AGGQuestBase* Quest);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRemoveRadarWaypoint(AGGPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRemovePersonalWaypoint(AGGPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerCreateOrMoveRadarWaypoint(AGGPlayerState* PlayerState, AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerCreateOrMovePersonalWaypoint(AGGPlayerState* PlayerState, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void OnQuestUpdated(AGGQuestBase* Quest, FGameplayTag UpdateTag);
    
    UFUNCTION(BlueprintCallable)
    void OnQuestCompleted(AGGQuestBase* Quest, AGGPlayerState* OptionalPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatTowerSynchronised(AGGGoatTower* GoatTower, ETowerSynchronizationEvent SynchronizationEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatExitedThroneRoom(AGGGoat* Goat, AGGGoatTower* GoatTower);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatEnteredThroneRoom(AGGGoat* Goat, AGGGoatTower* GoatTower);
    
    UFUNCTION(BlueprintCallable)
    void InitQuestBindings(UGGQuestManager* QuestManager);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetStylizedDistanceToRadarPoint(AGGPlayerController* GGPC, FRadarCoordinateData InData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetStylizedDistanceTextToRadarPoint(AGGPlayerController* GGPC, FRadarCoordinateData InData);
    
protected:
    UFUNCTION(BlueprintCallable)
    AGGPlayerController* GetOwningController();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddRadarCoordinateDataActor(AActor* Actor);
    
};

