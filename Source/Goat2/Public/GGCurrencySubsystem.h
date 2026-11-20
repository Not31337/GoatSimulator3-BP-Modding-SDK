#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GGWorldSubsystem.h"
#include "GGCurrencySubsystem.generated.h"

class AActor;
class AGGCurrencyActor;
class AGGNPC;
class AGGVehicle;

UCLASS(Blueprintable, Config=Game)
class GOAT2_API UGGCurrencySubsystem : public UGGWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGCurrencyActor*> PooledCurrencyActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGCurrencyActor*> SpawnedCurrencyActors;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> MapFilterNames;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxRandomActorSpawns;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinRandomActorSpawns;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MobileMaxRandomActorSpawns;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MobileMinRandomActorSpawns;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistCheckInterval;
    
    UGGCurrencySubsystem();

    UFUNCTION(BlueprintCallable)
    void SpawnCurrency(int32 Amount, FVector InLocation, bool bIsImportant);
    
    UFUNCTION(BlueprintCallable)
    void PoolCurrencyActor(AGGCurrencyActor* InCurrencyActor);
    
    UFUNCTION(BlueprintCallable)
    void OnVehicleExploded(AGGVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnNPCSpawnedIntoWorld(AGGNPC* NPC);
    
    UFUNCTION(BlueprintCallable)
    void OnCurrencyEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

