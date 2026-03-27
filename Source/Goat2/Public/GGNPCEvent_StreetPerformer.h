#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GGNPCEvent.h"
#include "GGNPCEvent_StreetPerformer.generated.h"

class AActor;
class AGGNPC;
class AGGNPC_Humanoid;
class UPrimitiveComponent;
class USphereComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGNPCEvent_StreetPerformer : public AGGNPCEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* OverlapSphere;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPerforming;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC_Humanoid* PerformerNPC;
    
public:
    AGGNPCEvent_StreetPerformer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGNPC* GetPerformerNPC() const;
    
};

