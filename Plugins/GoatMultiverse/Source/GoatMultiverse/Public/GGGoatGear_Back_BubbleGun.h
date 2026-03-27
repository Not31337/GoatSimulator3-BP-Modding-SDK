#pragma once
#include "CoreMinimal.h"
#include "GGGoatGear_Skel_Base.h"
#include "GGGoatGear_Back_BubbleGun.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATMULTIVERSE_API UGGGoatGear_Back_BubbleGun : public UGGGoatGear_Skel_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBlowingBubbles;
    
    UGGGoatGear_Back_BubbleGun(const FObjectInitializer& ObjectInitializer);

};

