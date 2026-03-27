#pragma once
#include "CoreMinimal.h"
#include "GGGoatGear_Scene_Horns.h"
#include "GGGoatGear_Scene_Horns_Druid.generated.h"

class AActor;
class AGGGoat;
class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGGoatGear_Scene_Horns_Druid : public UGGGoatGear_Scene_Horns {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PigeonParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PigeonSockets;
    
    UGGGoatGear_Scene_Horns_Druid(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnHeadbutting(AGGGoat* GoatHeadbutting, bool bHitSomething, const TArray<AActor*>& HeadbuttedActors, bool bIsChargeHeadbutt);
    
};

