#pragma once
#include "CoreMinimal.h"
#include "GGGoatGear_Scene_Base.h"
#include "GGGoatGear_Scene_AltGoat.generated.h"

class UAnimationAsset;
class UGGAlternativeGoatDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGGoatGear_Scene_AltGoat : public UGGGoatGear_Scene_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGAlternativeGoatDataAsset* AltGoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* PreviewIdleAnim;
    
    UGGGoatGear_Scene_AltGoat(const FObjectInitializer& ObjectInitializer);

};

