#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "SeasonalTag.h"
#include "GGSeasonalContentSubsystem.generated.h"

class AActor;

UCLASS(Blueprintable, Config=GoatFeatures)
class GOAT2_API UGGSeasonalContentSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeasonalTag> SeasonalTags;
    
    UGGSeasonalContentSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetSeasonalGameplayTagEnabled(const FGameplayTag& SeasonalTag, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetSeasonalContentEnabled(const FString& SeasonalTagName, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetSeasonalActorTagEnabled(const FString& SeasonalTag, bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSeasonalContentEnabled(const FGameplayTagContainer& GameplayTags) const;
    
private:
    UFUNCTION(BlueprintCallable)
    bool IsSeasonalActorExcluded(const AActor* Actor) const;
    
};

