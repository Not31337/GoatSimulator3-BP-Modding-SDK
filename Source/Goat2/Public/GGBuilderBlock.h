#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGBuilderBlock.generated.h"

class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGBuilderBlock : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BlockMesh;
    
public:
    AGGBuilderBlock(const FObjectInitializer& ObjectInitializer);

};

