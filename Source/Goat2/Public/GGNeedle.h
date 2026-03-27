#pragma once
#include "CoreMinimal.h"
#include "GGPhysicsProjectile.h"
#include "GGNeedle.generated.h"

class AGGGoat;
class AGGNPC;
class UGGAlternativeGoatDataAsset;
class UGGStiffBonesComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGNeedle : public AGGPhysicsProjectile {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGStiffBonesComponent* HitStiffBonesComponent;
    
public:
    AGGNeedle(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnAttachedNPCPooled(AGGNPC* NPC, bool bWasPooled);
    
    UFUNCTION(BlueprintCallable)
    void OnAttachedGoatAltGoatChanged(AGGGoat* Goat, UGGAlternativeGoatDataAsset* NewAltGoat);
    
};

