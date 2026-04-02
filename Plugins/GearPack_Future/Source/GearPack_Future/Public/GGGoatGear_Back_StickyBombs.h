#pragma once
#include "CoreMinimal.h"
#include "GGEffectSpawnHolder.h"
#include "GGGoatGear_Skel_Base.h"
#include "GGGoatGear_Back_StickyBombs.generated.h"

class AGGStickyBomb;
class UAnimMontage;
class UGGAnimInstance_StickyBomb_Blob;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEARPACK_FUTURE_API UGGGoatGear_Back_StickyBombs : public UGGGoatGear_Skel_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* BlobMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGAnimInstance_StickyBomb_Blob* BlobAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGStickyBomb*> LaunchedBombs;
    
    UGGGoatGear_Back_StickyBombs(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayLaunchEffect(const FGGEffectSpawnHolder& Effect, FName Socket, UAnimMontage* LaunchAnimation, float Cooldown);
    
};

