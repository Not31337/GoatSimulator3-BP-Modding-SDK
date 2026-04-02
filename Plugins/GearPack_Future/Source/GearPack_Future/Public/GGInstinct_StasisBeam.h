#pragma once
#include "CoreMinimal.h"
#include "GGInstinct.h"
#include "StasisInstinctTracker.h"
#include "GGInstinct_StasisBeam.generated.h"

class AActor;
class AGGGoat;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class GEARPACK_FUTURE_API AGGInstinct_StasisBeam : public AGGInstinct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LandOnStasisForInstinct;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStasisInstinctTracker> StasisInstinctTrackers;
    
public:
    AGGInstinct_StasisBeam(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnGoatLanded(AGGGoat* Goat, AActor* FloorActor, UPrimitiveComponent* FloorComponent);
    
};

