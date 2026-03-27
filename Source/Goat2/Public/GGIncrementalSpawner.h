#pragma once
#include "CoreMinimal.h"
#include "GGWorldSubsystem.h"
#include "OnIncrementalSpawnActorDelegateDelegate.h"
#include "SpawnData.h"
#include "SpawnParams.h"
#include "GGIncrementalSpawner.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class GOAT2_API UGGIncrementalSpawner : public UGGWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnData> SpawningActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnData> NewSpawningActors;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> DestructingActors;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> NewDestructingActors;
    
public:
    UGGIncrementalSpawner();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SpawnActorIncremental(UObject* WorldContextObject, UPARAM(Ref) FSpawnParams& SpawnParams, const FOnIncrementalSpawnActorDelegate& FailedDelegate, const FOnIncrementalSpawnActorDelegate& BeforeFinishDelegate, const FOnIncrementalSpawnActorDelegate& AfterFinishDelegate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool DestroyActorIncremental(UObject* WorldContextObject, AActor* Actor, bool bNetForce, bool bShouldModifyLevel);
    
};

