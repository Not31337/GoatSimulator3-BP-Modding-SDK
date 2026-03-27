#pragma once
#include "CoreMinimal.h"
#include "GGGoatGear_Scene_Horns.h"
#include "GGGoatGear_Scene_Horns_Lyre.generated.h"

class UParticleSystem;
class UStaticMesh;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATMULTIVERSE_API UGGGoatGear_Scene_Horns_Lyre : public UGGGoatGear_Scene_Horns {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* LyreStump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ActivationParticles;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsLyreSpawned, meta=(AllowPrivateAccess=true))
    bool bIsLyreSpawned;
    
public:
    UGGGoatGear_Scene_Horns_Lyre(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsLyreSpawned();
    
};

