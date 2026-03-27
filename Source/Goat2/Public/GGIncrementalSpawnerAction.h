#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Engine/EngineTypes.h"
#include "OnIncrementalSpawnFinishedDelegate.h"
#include "SpawnParams.h"
#include "GGIncrementalSpawnerAction.generated.h"

class AActor;
class APawn;
class UGGIncrementalSpawnerAction;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UGGIncrementalSpawnerAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIncrementalSpawnFinished OnIncrementalSpawnFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIncrementalSpawnFinished OnIncrementalSpawnBeforeFinish;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIncrementalSpawnFinished OnIncrementalSpawnPostActorConstruction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIncrementalSpawnFinished OnIncrementalSpawnAfterFinish;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnParams SpawnParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    UGGIncrementalSpawnerAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGGIncrementalSpawnerAction* SpawnActorAction(UObject* NewWorldContextObject, UClass* Class, const FTransform& Transform, AActor* Owner, APawn* Instigator, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride);
    
};

