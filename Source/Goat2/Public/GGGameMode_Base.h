#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Templates/SubclassOf.h"
#include "GGGameMode_Base.generated.h"

class UGGNPCEventManager;
class UGGNPCManager;
class UGGStatusEffectPoolManager;
class UGGVehicleManager;

UCLASS(Blueprintable, NonTransient)
class GOAT2_API AGGGameMode_Base : public AGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGNPCManager> NPCManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGVehicleManager> VehicleManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGNPCEventManager> NPCEventManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGStatusEffectPoolManager> SEPoolManagerClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGNPCManager* NPCManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGVehicleManager* VehicleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGNPCEventManager* NPCEventManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGStatusEffectPoolManager* SEPoolManager;
    
public:
    AGGGameMode_Base(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGVehicleManager* GetVehicleManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGStatusEffectPoolManager* GetSEPoolManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGNPCManager* GetNPCManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGNPCEventManager* GetNPCEventManager() const;
    
};

