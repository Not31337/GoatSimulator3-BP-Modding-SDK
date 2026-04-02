#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GGStatusEffectCameraComponent.generated.h"

class AGGStatusEffectBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGStatusEffectCameraComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AGGStatusEffectBase*> ConnectedStatusEffects;
    
public:
    UGGStatusEffectCameraComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DeInitialize();
    
};

