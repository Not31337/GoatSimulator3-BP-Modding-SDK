#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EBodyParts.h"
#include "GGLoadNPCAppearanceOutputPinDelegate.h"
#include "LoadedAppearancePart.h"
#include "GGLoadNPCAppearance.generated.h"

class UGGLoadNPCAppearance;
class UMaterialInterface;
class UMeshComponent;
class UObject;

UCLASS(Blueprintable)
class GOAT2_API UGGLoadNPCAppearance : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGLoadNPCAppearanceOutputPin Finished;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> TemporaryReferences;
    
public:
    UGGLoadNPCAppearance();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGGLoadNPCAppearance* LoadNPCAppearance(const UObject* NewWorldContextObject, const TArray<FString>& NpcAppearance);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyLoadedAppearanceMaterials(UMeshComponent* PartComponent, EBodyParts Part, const FLoadedAppearancePart& LoadedPart, UMaterialInterface* SkinMat);
    
    UFUNCTION(BlueprintCallable)
    void AppearanceLoaded();
    
};

