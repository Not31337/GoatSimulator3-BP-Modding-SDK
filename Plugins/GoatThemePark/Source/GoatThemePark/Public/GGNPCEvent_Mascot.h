#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GGNPCEvent.h"
#include "GGNPCEvent_Mascot.generated.h"

class AActor;
class AGGNPC;
class UPrimitiveComponent;
class USphereComponent;

UCLASS(Blueprintable)
class GOATTHEMEPARK_API AGGNPCEvent_Mascot : public AGGNPCEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceToTrigger;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC* MascotNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* OverlapSphere;
    
public:
    AGGNPCEvent_Mascot(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGNPC* GetMascot() const;
    
};

