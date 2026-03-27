#pragma once
#include "CoreMinimal.h"
#include "FeetMeshElement.h"
#include "FeetMeshOverrideElement.h"
#include "GGGoatGear_Scene_Base.h"
#include "MeshLocModifierOverrideElement.h"
#include "GGGoatGear_Scene_Feet.generated.h"

class UMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Engine, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGGoatGear_Scene_Feet : public UGGGoatGear_Scene_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FFeetMeshElement> FeetMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FFeetMeshOverrideElement> AltGoatFeetMeshOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bIgnoreDataAssetIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FMeshLocModifierOverrideElement> AltGoatMeshLocOverrides;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> FeetComponents;
    
public:
    UGGGoatGear_Scene_Feet(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMeshComponent*> GetFeetMeshComponents() const;
    
};

