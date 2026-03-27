#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGCommanderTargeter.generated.h"

class UCapsuleComponent;
class UParticleSystemComponent;
class USceneComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGCommanderTargeter : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* OverlapCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* TargeterParticleVisualizer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* TargeterAreaParticleVisualizer;
    
public:
    AGGCommanderTargeter(const FObjectInitializer& ObjectInitializer);

};

