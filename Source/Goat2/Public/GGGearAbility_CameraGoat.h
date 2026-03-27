#pragma once
#include "CoreMinimal.h"
#include "GGGearAbility.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_CameraGoat.generated.h"

class AGGCameraGoatGearCamera;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_CameraGoat : public UGGGearAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGCameraGoatGearCamera> CameraClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CameraActor, meta=(AllowPrivateAccess=true))
    AGGCameraGoatGearCamera* CameraActor;
    
public:
    UGGGearAbility_CameraGoat();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CameraActor();
    
};

