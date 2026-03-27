#pragma once
#include "CoreMinimal.h"
#include "GGGoatAbility_Lick.h"
#include "GGGoatAbility_Lick_Eat.generated.h"

class AGGGoat;
class UObject;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class GOAT2_API UGGGoatAbility_Lick_Eat : public UGGGoatAbility_Lick {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayTongueStayAtObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayUntilEatObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysicsHandleInterpSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysicsHandleInterpSpeedVehicleMassModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysicsHandleInterpSpeedMinimumMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* CachedClosestLickable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* CachedClosestComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CachedLickedBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGGGoat* CachedGoat;
    
public:
    UGGGoatAbility_Lick_Eat();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTongueDoneAtObject();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnObjectPulledTowardsGoat();
    
};

