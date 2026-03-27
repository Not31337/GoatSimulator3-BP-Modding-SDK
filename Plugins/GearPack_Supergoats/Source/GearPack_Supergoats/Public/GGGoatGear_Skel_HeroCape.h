#pragma once
#include "CoreMinimal.h"
#include "GGGoatGear_Skel_Base.h"
#include "GGGoatGear_Skel_HeroCape.generated.h"

class UAudioComponent;
class USoundBase;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEARPACK_SUPERGOATS_API UGGGoatGear_Skel_HeroCape : public UGGGoatGear_Skel_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* PassiveSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PassiveSoundSpeedParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* PassiveSoundComponent;
    
public:
    UGGGoatGear_Skel_HeroCape(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastResetGoatCollision();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastDisableGoatCollision();
    
};

