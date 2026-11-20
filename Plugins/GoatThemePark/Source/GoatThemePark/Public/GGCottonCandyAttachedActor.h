#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GGCottonCandyAttachedActor.generated.h"

class AActor;
class UNiagaraComponent;
class UPhysicsConstraintComponent;
class UPhysicsHandleComponent;

USTRUCT(BlueprintType)
struct GOATTHEMEPARK_API FGGCottonCandyAttachedActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachComponentBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AttachedComponentSurfaceLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GoatBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PhysicsActorRelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat PhysicsActorRelativeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GoatSurfaceLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, meta=(AllowPrivateAccess=true))
    UPhysicsConstraintComponent* NpcPhysicsConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, meta=(AllowPrivateAccess=true))
    TArray<UPhysicsConstraintComponent*> PActorDisableCollisionPhysicsConstraints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, meta=(AllowPrivateAccess=true))
    UPhysicsHandleComponent* PActorPhysicsHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* ConnectionParticles;
    
    FGGCottonCandyAttachedActor();
};

