#pragma once
#include "CoreMinimal.h"
#include "CineCameraActor.h"
#include "GGCineCameraActor.generated.h"

UCLASS(Blueprintable)
class GOAT2_API AGGCineCameraActor : public ACineCameraActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldHideUI;
    
    AGGCineCameraActor(const FObjectInitializer& ObjectInitializer);

};

