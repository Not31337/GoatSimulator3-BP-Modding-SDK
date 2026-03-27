#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GGAchievementSubsystem.generated.h"

class AGGAchievement;
class AGGPlayerController;
class UCompositeDataTable;
class UDataTable;

UCLASS(Blueprintable, Config=Game)
class GOAT2_API UGGAchievementSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCompositeDataTable* LoadedAchievementDataTables;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UDataTable>> AchievementDataTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGAchievement*> SpawnedAchievements;
    
public:
    UGGAchievementSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnlockAchievements(TArray<FString> AchievementIDs, AGGPlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    void UnlockAchievement(const FString& AchievementID, AGGPlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    void QueryAchievements();
    
};

