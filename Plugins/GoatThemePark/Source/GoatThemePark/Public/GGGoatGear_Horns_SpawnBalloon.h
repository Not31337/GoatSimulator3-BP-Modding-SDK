#pragma once
#include "CoreMinimal.h"
#include "GGGoatGear_Scene_Horns.h"
#include "GGGoatGear_Horns_SpawnBalloon.generated.h"

class UAnimMontage;
class UParticleSystem;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATTHEMEPARK_API UGGGoatGear_Horns_SpawnBalloon : public UGGGoatGear_Scene_Horns {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageSpawnBalloonLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageSpawnBalloonRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PointPlacedVFX;
    
    UGGGoatGear_Horns_SpawnBalloon(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlayPointPlacedVFX(FName SocketName);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlayBalloonSpawnMontage(bool bLeft);
    
};

