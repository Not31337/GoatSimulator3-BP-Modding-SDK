#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGLadderActor.generated.h"

class UGGLadderComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGLadderActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGLadderComponent* LadderComponent;
    
public:
    AGGLadderActor(const FObjectInitializer& ObjectInitializer);

};

