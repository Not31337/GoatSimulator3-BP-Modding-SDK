#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "GGBattleRoyalBenchmark.generated.h"

class AActor;
class AGGBRBSpawner;
class AGGExplosiveActor;
class AGGNPC;
class UStaticMesh;

UCLASS(Blueprintable)
class GOAT2_API AGGBattleRoyalBenchmark : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AGGNPC>> NPCsToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UStaticMesh>> MeshesToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> ActorsToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FPSTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartDelay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGBRBSpawner*> Spawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ThingsWeSpawnedSoFar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGExplosiveActor*> SpawnedExplosives;
    
public:
    AGGBattleRoyalBenchmark(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopBenchmark();
    
    UFUNCTION(BlueprintCallable)
    void StartBenchmark();
    
};

