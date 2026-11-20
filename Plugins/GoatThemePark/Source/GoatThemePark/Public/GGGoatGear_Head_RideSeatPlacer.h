#pragma once
#include "CoreMinimal.h"
#include "Kismet/KismetMathLibrary.h"
#include "GGEffectSpawnHolder.h"
#include "GGGoatGear_Skel_Base.h"
#include "GGRideSeatSpawnAnimation.h"
#include "GGGoatGear_Head_RideSeatPlacer.generated.h"

class AGGRideSeat;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATTHEMEPARK_API UGGGoatGear_Head_RideSeatPlacer : public UGGGoatGear_Skel_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGEffectSpawnHolder SpawnSeatEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsAbilityActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGRideSeatSpawnAnimation> ActiveSeatAnimations;
    
    UGGGoatGear_Head_RideSeatPlacer(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastStartSpawnAnimation(AGGRideSeat* Seat, float Duration, EEasingFunc::Type EasingFunction, int32 SeatIndex);
    
};

