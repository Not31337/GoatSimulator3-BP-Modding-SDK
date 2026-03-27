#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGGameInstanceSubsystem.h"
#include "GGWaypointSubsystem.generated.h"

class AGGGoat;
class AGGPlayerController;
class UWorld;

UCLASS(Blueprintable)
class GOAT2_API UGGWaypointSubsystem : public UGGGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoat* PlayerGoat;
    
public:
    UGGWaypointSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void PostLoadMapWithWorld(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerWorldAreaExited(AGGGoat* Goat, FGameplayTag LeftArea);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerWorldAreaEntered(AGGGoat* Goat, FGameplayTag NewArea);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatReplaced(AGGGoat* OldGoat, AGGGoat* NewGoat);
    
    UFUNCTION(BlueprintCallable)
    void OnBenchmarkLevelLoaded();
    
};

