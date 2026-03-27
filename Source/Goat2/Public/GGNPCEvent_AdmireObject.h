#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GGNPCEvent.h"
#include "GGNPCEvent_AdmireObject.generated.h"

class AActor;
class UPrimitiveComponent;
class USphereComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGNPCEvent_AdmireObject : public AGGNPCEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* OverlapSphere;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceToTrigger;
    
public:
    AGGNPCEvent_AdmireObject(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

