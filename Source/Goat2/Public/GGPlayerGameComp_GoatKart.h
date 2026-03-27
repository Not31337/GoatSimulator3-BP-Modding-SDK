#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GoatKartCircuitResult.h"
#include "GGPlayerGameComp_GoatKart.generated.h"

class AGGGoat;
class AGGPlayerGame_Base;
class USplineComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGPlayerGameComp_GoatKart : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGoatKartCircuitResult> FullCircuit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldEndGameWhenFirstPlayerFinishes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxLapsAroundCircuit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AGGGoat*> GoatsThatHaveFinished;
    
public:
    UGGPlayerGameComp_GoatKart(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetFullCircuit(const USplineComponent* TrackSpline);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerPerformedLap(AGGGoat* Goat, int32 LapsPerformed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerCrossedPoint(AGGGoat* Goat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool HasPlayerFinishedRace(AGGGoat* Goat) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGPlayerGame_Base* GetOwnerPlayerGame() const;
    
};

