#pragma once
#include "CoreMinimal.h"
#include "Engine/Scene.h"
#include "GGGoatGear_Static_Base.h"
#include "GGGoatGear_Static_Television.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGGoatGear_Static_Television : public UGGGoatGear_Static_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessSettings TeleEffectPostProcessing;
    
    UGGGoatGear_Static_Television(const FObjectInitializer& ObjectInitializer);

};

