#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GGObjectControlInterface.h"
#include "GGApocalypseIntroPawn.generated.h"

class AGGPlayerController;
class UCameraComponent;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API AGGApocalypseIntroPawn : public APawn, public IGGObjectControlInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* CameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerController* ControllingPlayer;
    
public:
    AGGApocalypseIntroPawn(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

