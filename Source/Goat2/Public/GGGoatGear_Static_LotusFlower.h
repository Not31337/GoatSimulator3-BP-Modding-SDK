#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GGGoatGear_Static_Base.h"
#include "GGGoatGear_Static_LotusFlower.generated.h"

class UGGAlternativeGoatDataAsset;
class UStaticMeshComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGGoatGear_Static_LotusFlower : public UGGGoatGear_Static_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UGGAlternativeGoatDataAsset*, FVector2D> AltGoatLotusSize;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComp;
    
public:
    UGGGoatGear_Static_LotusFlower(const FObjectInitializer& ObjectInitializer);

};

