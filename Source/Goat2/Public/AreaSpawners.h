#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AreaSpawners.generated.h"

class AGGNPCSpawner_Animal;
class AGGNPCSpawner_Civilian;
class AGGNPCSpawner_Environment;
class AGGNPCSpawner_Professional;

USTRUCT(BlueprintType)
struct FAreaSpawners {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Area;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGNPCSpawner_Civilian*> CivilianSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGNPCSpawner_Environment*> EnvironmentSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGNPCSpawner_Environment*> ImportantEnvironmentSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGNPCSpawner_Professional*> ProfessionalSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGNPCSpawner_Animal*> AnimalSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGNPCSpawner_Animal*> ImportantAnimalSpawners;
    
    GOAT2_API FAreaSpawners();
};

