#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GGCatchOptions.h"
#include "GGGoatGear_Skel_Base.h"
#include "GGReleaseOptions.h"
#include "GGTraceParams.h"
#include "GGTheCuberReplicatedVariables.h"
#include "Templates/SubclassOf.h"
#include "GGGoatGear_Skel_TheCuber.generated.h"

class AActor;
class AGGPhysicsActor_CompactedCube;
class UAnimMontage;
class UGGGearAbility_TheCuber;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATAPOCALYPSE_API UGGGoatGear_Skel_TheCuber : public UGGGoatGear_Skel_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGPhysicsActor_CompactedCube> CompactedCubeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGTraceParams TraceParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToCatchTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToConvertTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageCatchActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageReleaseCube;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageNoValidTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CubeLaunchImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToScaleUpCube;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CubeReleaseLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentState, meta=(AllowPrivateAccess=true))
    FGGTheCuberReplicatedVariables RepVariables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGearAbility_TheCuber* OwningAbility;
    
    UGGGoatGear_Skel_TheCuber(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerPlayNoValidTargetMontage();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentState(const FGGTheCuberReplicatedVariables& OldValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastReleaseTarget(AActor* Target, FVector Location, FGGReleaseOptions Options);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayNoValidTargetMontage();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastCatchTarget(AActor* Target, FGGCatchOptions Options);
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_DoorsOpen();
    
};

