#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGRollercoasterTrainCar_DelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "GGRollercoasterTrainSpawner.generated.h"

class AGGRollercoasterTrainCar;

UCLASS(Blueprintable)
class GOATTHEMEPARK_API AGGRollercoasterTrainSpawner : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGRollercoasterTrainCar> TrainClassToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> ActorWithSpline;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGRollercoasterTrainCar_Delegate OnSpawned;
    
    AGGRollercoasterTrainSpawner(const FObjectInitializer& ObjectInitializer);

};

