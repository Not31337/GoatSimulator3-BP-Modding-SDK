#pragma once
#include "CoreMinimal.h"
#include "EGoatModType.h"
#include "GGGoatGear_Skel_Body.h"
#include "GGGoatGear_Skel_Test_GoatMods.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGGoatGear_Skel_Test_GoatMods : public UGGGoatGear_Skel_Body {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EGoatModType GoatModType;
    
    UGGGoatGear_Skel_Test_GoatMods(const FObjectInitializer& ObjectInitializer);

};

