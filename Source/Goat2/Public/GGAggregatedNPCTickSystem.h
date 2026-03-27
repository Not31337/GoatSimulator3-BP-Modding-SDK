#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GGAggregatedTick.h"
#include "GGAggregatedNPCTickSystem.generated.h"

class AGGCharacter;

UCLASS(Blueprintable)
class GOAT2_API UGGAggregatedNPCTickSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGAggregatedTick> CharacterTicks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGCharacter*> CharactersToRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGAggregatedTick> CachedCharacterTicks;
    
public:
    UGGAggregatedNPCTickSystem();

    UFUNCTION(BlueprintCallable)
    void SetActive(bool bShouldBeActive);
    
};

