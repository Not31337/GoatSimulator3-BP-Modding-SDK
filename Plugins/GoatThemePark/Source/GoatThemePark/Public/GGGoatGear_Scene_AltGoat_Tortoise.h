#pragma once
#include "CoreMinimal.h"
#include "GGGoatGear_Scene_AltGoat.h"
#include "GGGoatGear_Scene_AltGoat_Tortoise.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATTHEMEPARK_API UGGGoatGear_Scene_AltGoat_Tortoise : public UGGGoatGear_Scene_AltGoat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsAbilityActive;
    
    UGGGoatGear_Scene_AltGoat_Tortoise(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

