#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GGRideSeatAltGoatAnimation.h"
#include "GGRideSeatPlayerAnimation.generated.h"

UCLASS(Blueprintable)
class GOATTHEMEPARK_API UGGRideSeatPlayerAnimation : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGRideSeatAltGoatAnimation> Animations;
    
    UGGRideSeatPlayerAnimation();

};

