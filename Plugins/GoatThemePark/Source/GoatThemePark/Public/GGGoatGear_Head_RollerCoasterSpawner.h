#pragma once
#include "CoreMinimal.h"
#include "GGGoatGear_Skel_Base.h"
#include "GGGoatGear_Head_RollerCoasterSpawner.generated.h"

class UAnimMontage;
class UMaterialInterface;
class UParticleSystem;

UCLASS(Abstract, Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATTHEMEPARK_API UGGGoatGear_Head_RollerCoasterSpawner : public UGGGoatGear_Skel_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* StyleMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SpawnerMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LoopSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EndSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PointPlacedVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PointPlacedVFXSocket;
    
    UGGGoatGear_Head_RollerCoasterSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlaySpawnerMontage();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlayPointPlacedVFX();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_JumpToEndSection();
    
};

