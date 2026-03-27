#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "GGVehicleWheelMesh.generated.h"

class UMaterialInterface;
class USphereComponent;
class UStaticMesh;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATAPOCALYPSE_API UGGVehicleWheelMesh : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> CurrentMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* CurrentMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* AttachDistanceSphere;
    
    UGGVehicleWheelMesh(const FObjectInitializer& ObjectInitializer);

};

