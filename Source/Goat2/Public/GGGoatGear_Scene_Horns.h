#pragma once
#include "CoreMinimal.h"
#include "GGGoatGear_Scene_Base.h"
#include "Templates/SubclassOf.h"
#include "GGGoatGear_Scene_Horns.generated.h"

class AGGGoat;
class UAnimInstance;
class UGGAlternativeGoatDataAsset;
class UMaterialInterface;
class USkeletalMesh;
class UStaticMesh;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGGoatGear_Scene_Horns : public UGGGoatGear_Scene_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Horns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSkeletalHorns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalHorns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> AnimBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialOverride;
    
    UGGGoatGear_Scene_Horns(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnAltGoatChanged(AGGGoat* InGoat, UGGAlternativeGoatDataAsset* NewAltGoat);
    
};

