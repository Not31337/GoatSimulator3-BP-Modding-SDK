#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGWorldSubsystem.h"
#include "OverrideLocations.h"
#include "OverrideLocationsParameters.h"
#include "GGLevelStreamOverrideSubsystem.generated.h"

class AActor;

UCLASS(Blueprintable)
class GOAT2_API UGGLevelStreamOverrideSubsystem : public UGGWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FOverrideLocations> OverrideLocations;
    
public:
    UGGLevelStreamOverrideSubsystem();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveOverrideLocations(AActor* SourceActor, FGameplayTag SourceTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddNewOverrideLocations(AActor* SourceActor, FGameplayTag SourceTag, FOverrideLocationsParameters Parameters);
    
};

