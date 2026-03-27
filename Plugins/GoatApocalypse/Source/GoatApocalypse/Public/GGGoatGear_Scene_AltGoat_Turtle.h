#pragma once
#include "CoreMinimal.h"
#include "GGGoatGear_Scene_AltGoat.h"
#include "GGGoatGear_Scene_AltGoat_Turtle.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATAPOCALYPSE_API UGGGoatGear_Scene_AltGoat_Turtle : public UGGGoatGear_Scene_AltGoat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSurfing;
    
    UGGGoatGear_Scene_AltGoat_Turtle(const FObjectInitializer& ObjectInitializer);

};

