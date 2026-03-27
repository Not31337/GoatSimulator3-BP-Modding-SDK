#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGGearAbility.h"
#include "MenuNavigationContext.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_KrimsonMask.generated.h"

class AGGCharacter;
class AGGGoat;
class AGGKrimsonHand;
class AGGVehicle;
class APawn;

UCLASS(Blueprintable)
class GEARPACK_SUPERGOATS_API UGGGearAbility_KrimsonMask : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGKrimsonHand> KrimsonHandClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutwardsInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutwardsRotationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceFromGoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HandUpwardInterpDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HandScaleIncrease;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGKrimsonHand* KrimsonHand;
    
public:
    UGGGearAbility_KrimsonMask();

    UFUNCTION(BlueprintCallable)
    void OnMenuOpened(FGameplayTag InMenuTag, FMenuNavigationContext Context);
    
    UFUNCTION(BlueprintCallable)
    void OnEnteringVehicle(AGGCharacter* Character, AGGVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnEnteringBroom(AGGGoat* Goat, APawn* FlyingBroom);
    
};

