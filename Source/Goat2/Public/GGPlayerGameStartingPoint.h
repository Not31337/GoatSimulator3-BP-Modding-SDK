#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGInteractInterface.h"
#include "GGPlayerGameStartingPoint.generated.h"

class UGGPlayerGameDataAsset;

UCLASS(Blueprintable)
class GOAT2_API AGGPlayerGameStartingPoint : public AActor, public IGGInteractInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGPlayerGameDataAsset* PlayerGameDataAsset;
    
    AGGPlayerGameStartingPoint(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

