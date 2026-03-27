#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGNPCSpawner.h"
#include "WeightedElement_GameplayTag.h"
#include "WeightedElement_Mood.h"
#include "GGNPCSpawner_Civilian.generated.h"

class AGGEventSpawner;
class AGGNPCEvent;

UCLASS(Blueprintable)
class GOAT2_API AGGNPCSpawner_Civilian : public AGGNPCSpawner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ClassOverrideTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPCEvent* StartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGEventSpawner* StartEventSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireEnabledStartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AppearanceSetsToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AppearanceAreaTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedElement_GameplayTag> AppearanceAreaTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedElement_Mood> StartMoods;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEditAreaTags;
    
public:
    AGGNPCSpawner_Civilian(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool StartEventEnabled();
    
};

