#pragma once
#include "CoreMinimal.h"
#include "GGAppearanceSet.h"
#include "GGGoatGear_Scene_AltGoat.h"
#include "GGGoatGear_Scene_AltGoat_Human.generated.h"

class UGGGearAbility_HumanAltGoat;
class USkeletalMesh;
class UStaticMesh;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGGoatGear_Scene_AltGoat_Human : public UGGGoatGear_Scene_AltGoat {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeardMeshIndex;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* DefaultHairMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* DefaultUpperBodyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* DefaultLowerBodyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* DefaultHeadMesh;
    
public:
    UGGGoatGear_Scene_AltGoat_Human(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastLoadNewAppearance(const FGGAppearanceSet& Appearances, UGGGearAbility_HumanAltGoat* HumanAltGoat);
    
};

