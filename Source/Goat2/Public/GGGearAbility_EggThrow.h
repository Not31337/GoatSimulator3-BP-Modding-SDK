#pragma once
#include "CoreMinimal.h"
#include "GGCatchOptions.h"
#include "GGGearAbility.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_EggThrow.generated.h"

class AActor;
class AGGCharacter;
class AGGGoat;
class AGGVehicle;
class UGGGoatAbility;
class UGGGoatGear_Static_EggSaddle;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_EggThrow : public UGGGearAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGGoatAbility> LickOverrideAbility;
    
public:
    UGGGearAbility_EggThrow();

protected:
    UFUNCTION(BlueprintCallable)
    void OnOwnerPreScaled(bool bIsBeingCatched);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerEnteredVehicle(AGGCharacter* Character, AGGVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerCatched(AActor* CatchedActor, AActor* Catcher);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastEatActor(AActor* EatenActor, AGGGoat* Goat, FGGCatchOptions Options);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGGoatGear_Static_EggSaddle* GetEggSaddle(const AGGGoat* Goat) const;
    
    UFUNCTION(BlueprintCallable)
    void ForceReleaseCatchedActor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanThrow(const AGGGoat* Goat, const UGGGoatGear_Static_EggSaddle* EggSaddle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanEat(const AGGGoat* Goat, const UGGGoatGear_Static_EggSaddle* EggSaddle) const;
    
};

