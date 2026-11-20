#pragma once
#include "CoreMinimal.h"
#include "GGAnimNotify.h"
#include "GGCthillaTentaclesAnimNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class GOATTHEMEPARK_API UGGCthillaTentaclesAnimNotify : public UGGAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRightTentacle;
    
    UGGCthillaTentaclesAnimNotify();

};

