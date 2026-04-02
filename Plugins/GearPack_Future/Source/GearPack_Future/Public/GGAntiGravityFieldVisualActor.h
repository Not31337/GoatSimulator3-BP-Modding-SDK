#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GGAntiGravityFieldVisualActor.generated.h"

class AGGAlternateAntiGravityFieldActor;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GEARPACK_FUTURE_API AGGAntiGravityFieldVisualActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* FieldMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastBoxExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDeactivating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGAlternateAntiGravityFieldActor* AssignedFieldActor;
    
    AGGAntiGravityFieldVisualActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVisualFieldDeActivation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVisualFieldActivation();
    
    UFUNCTION(BlueprintCallable)
    void OnAssignedFieldActorDestroy(AActor* Actor);
    
};

