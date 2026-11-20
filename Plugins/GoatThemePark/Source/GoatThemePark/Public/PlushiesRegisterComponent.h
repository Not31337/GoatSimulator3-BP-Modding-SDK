#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlushiesRegisterComponent.generated.h"

class AGGPhysicsActor_Plushies;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATTHEMEPARK_API UPlushiesRegisterComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGPhysicsActor_Plushies*> SpawnedPlushies;
    
public:
    UPlushiesRegisterComponent(const FObjectInitializer& ObjectInitializer);

};

