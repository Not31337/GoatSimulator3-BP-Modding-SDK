#pragma once
#include "CoreMinimal.h"
#include "GGEffectSpawnHolder.h"
#include "GGGoatGear_Scene_Horns.h"
#include "Templates/SubclassOf.h"
#include "GGGoatGear_Horns_StickyHorns.generated.h"

class AActor;
class AGGGoat;
class AGGStatusEffectSticky;
class UMaterialInterface;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATTHEMEPARK_API UGGGoatGear_Horns_StickyHorns : public UGGGoatGear_Scene_Horns {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalHeadbuttImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGStatusEffectSticky> StickyStatusEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* StickyMeshMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGEffectSpawnHolder EffectHeadbutted;
    
    UGGGoatGear_Horns_StickyHorns(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnGoatHeadbutted(AGGGoat* GoatHeadbutting, AActor* HeadbuttedActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayHeadbuttVFX();
    
};

