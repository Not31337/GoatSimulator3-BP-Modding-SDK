#pragma once
#include "CoreMinimal.h"
#include "GGGoatGear_Skel_Body.h"
#include "Templates/SubclassOf.h"
#include "GGGoatGear_Body_MiningDwarfOutfit.generated.h"

class ULocalLightComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATMULTIVERSE_API UGGGoatGear_Body_MiningDwarfOutfit : public UGGGoatGear_Skel_Body {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULocalLightComponent* FlashLight;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULocalLightComponent> LightClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FlashLightAttachSocket;
    
public:
    UGGGoatGear_Body_MiningDwarfOutfit(const FObjectInitializer& ObjectInitializer);

};

