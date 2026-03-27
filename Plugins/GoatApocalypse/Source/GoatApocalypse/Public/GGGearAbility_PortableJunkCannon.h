#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GGGearAbility.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_PortableJunkCannon.generated.h"

class AActor;
class AGGPortableJunkCannonCrate;
class UGGEffectsSpawnHolder;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API UGGGearAbility_PortableJunkCannon : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGPortableJunkCannonCrate> CrateClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JunkCannonSpawnHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownTraceDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGEffectsSpawnHolder* DestroyOldCannonEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGEffectsSpawnHolder* TargetEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AGGPortableJunkCannonCrate* SpawnedCrate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpawnedActorFromCrate;
    
public:
    UGGGearAbility_PortableJunkCannon();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void SpawnTargetEffects(FVector SpawnLocation, FRotator SpawnRotator);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void RemoveTargetEffects();
    
    UFUNCTION(BlueprintCallable)
    void CrateActorSpawned(AActor* SpawnedActor);
    
};

