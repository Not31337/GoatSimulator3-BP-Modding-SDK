#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GGNPCEvent.h"
#include "GGNPCEvent_StreetStall.generated.h"

class AActor;
class AGGNPC;
class AGGNPC_Humanoid;
class AGGStreetStall;
class UPrimitiveComponent;
class USphereComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGNPCEvent_StreetStall : public AGGNPCEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* OverlapSphere;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawQueuePositions;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC_Humanoid* VendorCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGStreetStall* StallActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool VendorAtStall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBuyerInLoc;
    
public:
    AGGNPCEvent_StreetStall(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGNPC* GetVendorCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGNPC* GetCurrentBuyer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BuyerLeftStall();
    
};

