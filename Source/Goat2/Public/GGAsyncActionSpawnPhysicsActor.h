#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Engine/EngineTypes.h"
#include "OnResourcesLoadedOutputPinDelegate.h"
#include "Templates/SubclassOf.h"
#include "GGAsyncActionSpawnPhysicsActor.generated.h"

class AActor;
class AGGPhysicsActor;
class APawn;
class UGGAsyncActionSpawnPhysicsActor;
class UObject;
class UStaticMesh;

UCLASS(Blueprintable)
class GOAT2_API UGGAsyncActionSpawnPhysicsActor : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResourcesLoadedOutputPin OnResourcesLoaded;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGPhysicsActor> PActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> PActorMeshOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* Instigator;
    
public:
    UGGAsyncActionSpawnPhysicsActor();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGGAsyncActionSpawnPhysicsActor* SpawnPhysicsActor(const UObject* NewWorldContextObject, TSubclassOf<AGGPhysicsActor> NewPActorClass, FTransform SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, TSoftObjectPtr<UStaticMesh> NewPActorMeshOverride, AActor* NewOwner, APawn* NewInstigator);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPhysicsActorFinishedLoadingResources(AGGPhysicsActor* PhysicsActor);
    
};

