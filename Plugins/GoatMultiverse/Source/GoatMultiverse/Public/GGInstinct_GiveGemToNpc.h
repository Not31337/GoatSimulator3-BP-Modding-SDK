#pragma once
#include "CoreMinimal.h"
#include "GGInstinct.h"
#include "GGInstinct_GiveGemToNpc.generated.h"

class AActor;
class AGGCharacter;
class AGGGoat;
class AGGPhysicsActor_Base;
class UStaticMesh;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGInstinct_GiveGemToNpc : public AGGInstinct {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UStaticMesh>> GemClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AGGPhysicsActor_Base*, AGGGoat*> DroppedGems;
    
public:
    AGGInstinct_GiveGemToNpc(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnGemPickedUp(AGGPhysicsActor_Base* Gem, AGGCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void GoatDroppedLickedActor(AGGGoat* GoatLicking, AActor* LickedActor);
    
};

