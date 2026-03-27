#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGGrafittiTagger_FoundingFather.generated.h"

UCLASS(Blueprintable)
class GOAT2_API AGGGrafittiTagger_FoundingFather : public AActor {
    GENERATED_BODY()
public:
    AGGGrafittiTagger_FoundingFather(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnUsingTaggerInFoundingFatherOverlapp();
    
};

