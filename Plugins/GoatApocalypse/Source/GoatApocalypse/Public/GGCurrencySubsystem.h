#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GGWorldSubsystem.h"
#include "GGCurrencySubsystem.generated.h"

class AActor;
class AGGApocalypseCurrencyActor;
class AGGNPC;
class AGGVehicle;
class UGGNPCCurrencyComponent;

UCLASS(Blueprintable, Config=Game)
class GOATAPOCALYPSE_API UGGCurrencySubsystem : public UGGWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGApocalypseCurrencyActor*> PooledCurrencyActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGApocalypseCurrencyActor*> SpawnedCurrencyActors;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGGNPCCurrencyComponent> NPCCurrencyComponentClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxRandomActorSpawns;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinRandomActorSpawns;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MobileMaxRandomActorSpawns;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MobileMinRandomActorSpawns;
    
    UGGCurrencySubsystem();

    UFUNCTION(BlueprintCallable)
    void SpawnCurrency(int32 Amount, FVector InLocation, bool bIsImportant);
    
    UFUNCTION(BlueprintCallable)
    void PoolCurrencyActor(AGGApocalypseCurrencyActor* InCurrencyActor);
    
    UFUNCTION(BlueprintCallable)
    void OnVehicleExploded(AGGVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnNPCSpawnedIntoWorld(AGGNPC* NPC);
    
    UFUNCTION(BlueprintCallable)
    void OnCurrencyEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

