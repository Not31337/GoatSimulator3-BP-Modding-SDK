#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GGInstinct.h"
#include "GGInstinct_Helicopter_CinemaFrame.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable)
class GOATAPOCALYPSE_API AGGInstinct_Helicopter_CinemaFrame : public AGGInstinct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CinemaFrameActor;
    
    AGGInstinct_Helicopter_CinemaFrame(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveCinemaFrameActor();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCinemaFrameEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnCinemaFrameBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void AsignCinemaFrameActor(AActor* Actor, TEnumAsByte<EAxis::Type> InFrameForwardAxis);
    
};

