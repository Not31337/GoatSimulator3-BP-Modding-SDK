#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/TriggerBox.h"
#include "GGExponentialFogTrigger.generated.h"

class AActor;
class AExponentialHeightFog;
class UExponentialHeightFogComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGExponentialFogTrigger : public ATriggerBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FogActivationCheckDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowBoxBounds;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AExponentialHeightFog* HeightFogInWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UExponentialHeightFogComponent* HeightFogComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle THDelayedCheck;
    
public:
    AGGExponentialFogTrigger(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckIfFogShouldBeChanged() const;
    
};

