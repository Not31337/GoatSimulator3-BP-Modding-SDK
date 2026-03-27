#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "ActiveNPCAreaContainer.h"
#include "AreaData.h"
#include "AreaSpawners.h"
#include "EMoods.h"
#include "ENPCType.h"
#include "EPoolReason.h"
#include "NPCClassOverride.h"
#include "Templates/SubclassOf.h"
#include "WeightedElement_Professional.h"
#include "GGNPCManager.generated.h"

class AActor;
class AGGNPC;
class AGGNPC_Animal;
class AGGNPC_Humanoid;
class AGGPaperboyDropOffPoint;
class AGGPlayerController;
class UGGNPCManager;
class UGGNPCManagerConfigAsset;
class UGGVehicleManager;

UCLASS(Blueprintable, Config=Game)
class GOAT2_API UGGNPCManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LogSpawnerGathering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ManagedLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ManageInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpulseRelevantTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceRelevantFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighVelocityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCiviliansPerUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxEnvironmentalsPerUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxImportantEnvironmentalsPerUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxProfessionalsPerUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAnimalsPerUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxImportantAnimalsPerUpdate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGNPCManagerConfigAsset* CurrentConfigAsset;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGNPCManagerConfigAsset* ConfigAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGNPCManagerConfigAsset* Gen8ConfigAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGNPCManagerConfigAsset* MobileConfigAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGNPCManagerConfigAsset* SwitchConfigAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGPlayerController*> PlayerControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGNPC*> IrrelevantCivNPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGNPC*> IrrelevantNonRagdollCivNPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGNPC*> IrrelevantEnvNPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGNPC*> IrrelevantProfNPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGNPC*> IrrelevantAnimNPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGNPC*> IrrelevantSpecNPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAreaData> Areas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActiveNPCAreaContainer> ActiveNPCAreaContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAreaSpawners> AreaSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGNPC*> AllNPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGNPC*> ActiveCivilianNPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGNPC*> ActiveDriverCivsNPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGNPC*> PooledCivilianNPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGNPC> HardCivilianClass;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AGGNPC> CivilianClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNPCClassOverride> OverrideCivilianClasses;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGNPC*> ActiveEnvironmentalNPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGNPC*> PooledEnvironmentalNPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGNPC> HardEnvironmentalClass;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AGGNPC> EnvironmentalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNPCClassOverride> OverrideEnvironmentalClasses;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGNPC*> ActiveProfessionalNPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGNPC*> PooledProfessionalNPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGNPC*> ActiveSpecialNPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGNPC*> PooledSpecialNPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGNPC*> ActiveAnimalNPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGNPC*> PooledAnimalNPCs;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PoolLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedElement_Professional> ProfessionalNPCSpawnPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGPaperboyDropOffPoint*> PaperboyDropOffPoints;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGVehicleManager* VehicleManager;
    
public:
    UGGNPCManager();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveProfessionalFromSpawnPool(TSubclassOf<AGGNPC_Humanoid> ProfessionalClass);
    
    UFUNCTION(BlueprintCallable)
    void PoolNPC(AGGNPC* NPC, EPoolReason Reason);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool LocationOverlappingVehicle(FVector Location, float Radius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShouldNPCManage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGNPC*> GetPooledSpecialNPCs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGNPC*> GetPooledProfessionalNPCs() const;
    
    UFUNCTION(BlueprintCallable)
    AGGNPC* GetPooledNPC(ENPCType Type, TSubclassOf<AGGNPC> SpecialNPCClass, TSubclassOf<AGGNPC> ProfessionalClass, TSubclassOf<AGGNPC_Animal> AnimalClass, bool bRemoveFromArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGNPC*> GetPooledEnvironmentalNPCs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGNPC*> GetPooledCivilianNPCs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGNPC*> GetPooledAnimalNPCs() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<AGGNPC*> GetNPCsInRadius_BP(FVector Location, float Radius, TArray<TSubclassOf<AGGNPC>> SpecificClasses, TArray<AGGNPC*> IgnoredNPCs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNPCsDisabled() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UGGNPCManager* GetNPCManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGNPCManagerConfigAsset* GetCurrentConfigAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGNPC*> GetAllNPCs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGNPC*> GetAllActiveNPCs(bool bIncludeAnimals);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGNPC*> GetActiveSpecialNPCs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGNPC*> GetActiveProfessionalNPCs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGNPC*> GetActiveEnvironmentalNPCs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGNPC*> GetActiveDriverCivsNPCs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGNPC*> GetActiveCivilianNPCs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGNPC*> GetActiveAnimalNPCs() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeNPCRelevantDistMobile(bool bIncrease);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddProfessionalToSpawnPool(TSubclassOf<AGGNPC_Humanoid> ProfessionalClass, int32 Weight, EMoods StartMood);
    
private:
    UFUNCTION(BlueprintCallable)
    void AddNPCToAll(AGGNPC* NPC);
    
    UFUNCTION(BlueprintCallable)
    void AddActiveNPC(AGGNPC* NPC);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool ActorHiddenForPlayers(TArray<AGGPlayerController*> Controllers, AActor* Actor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool ActorBlockedForPlayers(TArray<AGGPlayerController*> Controllers, AActor* Actor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool ActorBlockedForPlayer(AGGPlayerController* Controller, AActor* Actor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool ActorBehindPlayers(TArray<AGGPlayerController*> Controllers, AActor* Actor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool ActorBehindPlayer(AGGPlayerController* Controller, AActor* Actor);
    
};

