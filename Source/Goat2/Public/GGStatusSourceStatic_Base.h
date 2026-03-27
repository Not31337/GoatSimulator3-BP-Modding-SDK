#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGStatusSourceStatic_Base.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGStatusSourceStatic_Base : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePropState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UStaticMeshComponent> MeshToHide;
    
    AGGStatusSourceStatic_Base(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnBecamePhysActor();
    
};

