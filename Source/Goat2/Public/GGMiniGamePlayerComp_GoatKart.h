#pragma once
#include "CoreMinimal.h"
#include "GGMiniGamePlayerComp.h"
#include "GGMiniGamePlayerComp_GoatKart.generated.h"

class AGGPlayerGame_Base;
class UGGPlayerGameComp_GoatKart;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGMiniGamePlayerComp_GoatKart : public UGGMiniGamePlayerComp {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGGPlayerGameComp_GoatKart* PlayerGameComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGGPlayerGame_Base* PlayerGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 CurrentCircuitPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 LapsAroundCircuit;
    
public:
    UGGMiniGamePlayerComp_GoatKart(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerReplicateRaceState(int32 InCurrentCircuitPoint, int32 InLapsAroundCircuit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerPerformedLap();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerCrossedPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool HasPlayerFinishedRace() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPreviousCheckpoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPositionInRace(int32& OutPosition, int32& OutParticipants) const;
    
};

