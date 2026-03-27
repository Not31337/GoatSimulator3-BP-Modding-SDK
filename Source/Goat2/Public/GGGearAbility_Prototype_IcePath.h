#pragma once
#include "CoreMinimal.h"
#include "GGGearAbility.h"
#include "RagdollStateChangeSettings.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_Prototype_IcePath.generated.h"

class ACharacter;
class AGGIcePathPrototype;
class ULSCharacterMovementComponent;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_Prototype_IcePath : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGIcePathPrototype> IcePathClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceBetweenPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlaceInFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistInFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistInFrontWalking;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentIcePath, meta=(AllowPrivateAccess=true))
    AGGIcePathPrototype* CurrentIcePath;
    
public:
    UGGGearAbility_Prototype_IcePath();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentIcePath();
    
    UFUNCTION(BlueprintCallable)
    void OnGoatRagdoll(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
};

