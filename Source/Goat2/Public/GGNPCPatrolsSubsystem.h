#pragma once
#include "CoreMinimal.h"
#include "GGWorldSubsystem.h"
#include "NPCPatrolEntry.h"
#include "PatrolLevelGroup.h"
#include "WeightedElement_PatrolGroupClass.h"
#include "GGNPCPatrolsSubsystem.generated.h"

class AGGNPCPatrolGroup;
class AGGPatrolPath;
class AGGPlayerController;
class UPatrolSystemSettings;

UCLASS(Blueprintable, Config=Game)
class GOAT2_API UGGNPCPatrolsSubsystem : public UGGWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPatrolLevelGroup> PatrolLevelGroups;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FNPCPatrolEntry> PatrolEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPatrolSystemSettings* CurrentSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentLevelGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedElement_PatrolGroupClass> WeightedPatrolClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGPatrolPath*> PatrolPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGNPCPatrolGroup*> PatrolGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGPlayerController*> PlayerControllers;
    
public:
    UGGNPCPatrolsSubsystem();

protected:
    UFUNCTION(BlueprintCallable)
    void PatrolClassesLoaded();
    
};

