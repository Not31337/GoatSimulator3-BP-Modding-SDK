#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "GGGoatGear_Static_Base.h"
#include "GGGoatGear_Back_SideKick.generated.h"

class AActor;
class UAnimationAsset;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEARPACK_SUPERGOATS_API UGGGoatGear_Back_SideKick : public UGGGoatGear_Static_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> KickStartTs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KickCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverlapSphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypesToQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* LegAnimationAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KickImpulseDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KickUpAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KickForceScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterForceScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VehicleForceScalar;
    
    UGGGoatGear_Back_SideKick(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TraceForImpulse(int32 LegIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void PlayLegAnimationServer(int32 LegIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlayLegAnimationMulticast(int32 LegIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayKickAnimation(int32 LegIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnAppliedImpulseMulticast(const TArray<AActor*>& HitActors, int32 LegIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAppliedImpulseBlueprint(const TArray<AActor*>& HitActors, int32 LegIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ApplyImpulseServer(const TArray<AActor*>& HitActors, FVector_NetQuantize10 Location, FVector_NetQuantize10 Direction, int32 LegIndex);
    
};

