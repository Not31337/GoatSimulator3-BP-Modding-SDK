#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GGGearAbility.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_IceGoat.generated.h"

class AGGCharacter;
class AGGGoat;
class AGGIcePathSpline;
class AGGVehicle;
class APawn;

UCLASS(Blueprintable)
class GEARPACK_SUPERGOATS_API UGGGearAbility_IceGoat : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGIcePathSpline> IcePathClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GearEffectSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GoatSourceEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ForceFeedbackTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerMaxSections;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AGGIcePathSpline* CurrentIcePath;
    
public:
    UGGGearAbility_IceGoat();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnExitFlyingBroom(AGGGoat* Goat, APawn* FlyingBroom);
    
    UFUNCTION(BlueprintCallable)
    void OnExitedVehicle(AGGCharacter* Character, AGGVehicle* Vehicle);
    
};

