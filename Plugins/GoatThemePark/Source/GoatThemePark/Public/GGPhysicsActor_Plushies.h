#pragma once
#include "CoreMinimal.h"
#include "GGPhysicsActor.h"
#include "GGPhysicsActor_Plushies.generated.h"

class UPlushiesRegisterComponent;

UCLASS(Blueprintable)
class GOATTHEMEPARK_API AGGPhysicsActor_Plushies : public AGGPhysicsActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlushiesRegisterComponent* AssociatedRegisterComponent;
    
    AGGPhysicsActor_Plushies(const FObjectInitializer& ObjectInitializer);

};

