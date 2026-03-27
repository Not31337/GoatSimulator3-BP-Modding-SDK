#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGGoatGear_Scene_Base.h"
#include "GGGoatGear_Scene_Baa.generated.h"

class USoundBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGGoatGear_Scene_Baa : public UGGGoatGear_Scene_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BaaSoundAGTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* BaaSoundOverride;
    
    UGGGoatGear_Scene_Baa(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnBaaSoundActivatedLocally(bool bIsPreview);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnBaaActivatedLocally(bool bIsPreview);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ActivateBaaMulticast(bool bIsPreview);
    
    UFUNCTION(BlueprintCallable)
    void ActivateBaaLocally(bool bIsPreview);
    
};

