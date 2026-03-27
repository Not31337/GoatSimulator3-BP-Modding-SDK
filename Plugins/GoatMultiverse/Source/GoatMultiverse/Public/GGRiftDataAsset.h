#pragma once
#include "CoreMinimal.h"
#include "GGTeleportAreaDataAsset.h"
#include "ERiftType.h"
#include "Templates/SubclassOf.h"
#include "GGRiftDataAsset.generated.h"

class AGGRiftTransitionEffect;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API UGGRiftDataAsset : public UGGTeleportAreaDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERiftType RiftType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGRiftTransitionEffect> TransitionEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowRiftLightingDuringTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsIntroRift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEndingRift;
    
    UGGRiftDataAsset();

};

