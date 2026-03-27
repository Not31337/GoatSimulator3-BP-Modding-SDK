#pragma once
#include "CoreMinimal.h"
#include "GGGoatGear_Skel_Base.h"
#include "GGGoatGear_Skel_ChristmasLights.generated.h"

class UAudioComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGGoatGear_Skel_ChristmasLights : public UGGGoatGear_Skel_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ReelingInAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ReelingOutAudioComponent;
    
    UGGGoatGear_Skel_ChristmasLights(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentCableRotation() const;
    
};

