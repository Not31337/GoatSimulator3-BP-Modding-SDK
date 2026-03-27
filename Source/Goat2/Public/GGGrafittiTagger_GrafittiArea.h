#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGGrafittiTagger_GrafittiArea.generated.h"

class AGGGoat;

UCLASS(Blueprintable)
class GOAT2_API AGGGrafittiTagger_GrafittiArea : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WasSprayed, meta=(AllowPrivateAccess=true))
    bool bWasSprayed;
    
    AGGGrafittiTagger_GrafittiArea(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetAsSprayed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WasSprayed();
    
    UFUNCTION(BlueprintCallable)
    void MarkAsSprayed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnUsingTaggerAbilityInEventOverlaps(AGGGoat* GoatVandal);
    
};

