#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGInteractInterface.h"
#include "GGPaperboyDropOffPoint.generated.h"

class AGGNPC;
class USceneComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGPaperboyDropOffPoint : public AActor, public IGGInteractInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRootComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PaperboyPointCooldown;
    
    AGGPaperboyDropOffPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void WasUsedByPaperboy(AGGNPC* UsedByNPC);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Interact(AActor* SourceActor, float HeldFor);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool CanPointBeUsedBy(AGGNPC* NPC);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeInteractedWith(AActor* SourceActor);
    

    // Fix for true pure virtual functions not being implemented
};

