#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GGNPCEvent.h"
#include "GGNPCEvent_Superstar.generated.h"

class AActor;
class AGGNPC;
class UPrimitiveComponent;
class USphereComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGNPCEvent_Superstar : public AGGNPCEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceToTrigger;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC* SuperstarNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* OverlapSphere;
    
public:
    AGGNPCEvent_Superstar(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGNPC* GetSuperstar() const;
    
};

