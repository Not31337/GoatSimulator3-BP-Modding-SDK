#pragma once
#include "CoreMinimal.h"
#include "GGPhysicsActor.h"
#include "Templates/SubclassOf.h"
#include "GGPActor_BoxOfSurprise.generated.h"

class AGGStatusEffectFlattened;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGPActor_BoxOfSurprise : public AGGPhysicsActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleUpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SeekerAimRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SeekingDelayAfterLaunch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchAngularImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGStatusEffectFlattened> FlattenStatusEffectClass;
    
    AGGPActor_BoxOfSurprise(const FObjectInitializer& ObjectInitializer);

};

