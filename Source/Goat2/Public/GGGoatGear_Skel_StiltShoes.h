#pragma once
#include "CoreMinimal.h"
#include "GGGoatGear_Scene_Feet.h"
#include "GGGoatGear_Skel_StiltShoes.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGGoatGear_Skel_StiltShoes : public UGGGoatGear_Scene_Feet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TargetExtension, meta=(AllowPrivateAccess=true))
    float TargetExtension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentExtension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CurrentDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReachedEnd, meta=(AllowPrivateAccess=true))
    bool bReachedEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinExtensionAmoutBeforeSoundOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSoundOff;
    
    UGGGoatGear_Skel_StiltShoes(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_TargetExtension();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRep_ReachedEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStiltBackDown();
    
};

