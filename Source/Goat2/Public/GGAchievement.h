#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGAchievement.generated.h"

class AGGPlayerController;

UCLASS(Blueprintable)
class GOAT2_API AGGAchievement : public AActor {
    GENERATED_BODY()
public:
    AGGAchievement(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAchievementInitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasMetRequirements(bool bIsClient, bool bIsMainMenu, bool bIsIsland);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGPlayerController*> GetPlayersInWorld();
    
};

