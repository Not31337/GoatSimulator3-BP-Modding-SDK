#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGHeadbuttableObjectInterface.h"
#include "GGRaiderDefenseActor.generated.h"

class AGGGoat;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API AGGRaiderDefenseActor : public AActor, public IGGHeadbuttableObjectInterface {
    GENERATED_BODY()
public:
    AGGRaiderDefenseActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HitByKaiju(AGGGoat* Goat);
    

    // Fix for true pure virtual functions not being implemented
};

