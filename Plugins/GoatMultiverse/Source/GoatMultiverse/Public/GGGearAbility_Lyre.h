#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GGGearAbility.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_Lyre.generated.h"

class AActor;
class AGGLyre;
class AGGLyreProjectile;
class UGGGoatGear_Scene_Horns_Lyre;
class USoundBase;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API UGGGearAbility_Lyre : public UGGGearAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGLyreProjectile> ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* HitUnSupportedActorTypeSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnVerticalAngleOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGLyre* SpawnedLyre;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGLyreProjectile* LyreProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatGear_Scene_Horns_Lyre* LyreGearPart;
    
public:
    UGGGearAbility_Lyre();

protected:
    UFUNCTION(BlueprintCallable)
    void OnProjectileDestroyed(AActor* DestroyedProjectile);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlaySoundAtLocation(FVector InLocation);
    
};

