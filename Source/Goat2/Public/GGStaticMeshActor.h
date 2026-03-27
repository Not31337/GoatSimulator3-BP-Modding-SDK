#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "PerMaterialCustomPrimitiveData.h"
#include "GGStaticMeshActor.generated.h"

class UGGStaticMeshComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGStaticMeshActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPerMaterialCustomPrimitiveData> PerMaterialCustomPrimitiveData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGStaticMeshComponent* GGStaticMeshComponent;
    
public:
    AGGStaticMeshActor(const FObjectInitializer& ObjectInitializer);

};

