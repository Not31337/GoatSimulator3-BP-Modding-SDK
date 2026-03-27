#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetMathLibrary.h"
#include "GGToxicBarrelDisposed_DelegateDelegate.h"
#include "GGToxicWastePortal.generated.h"

class AGGToxicWastePortal_Target;
class UAudioComponent;
class UBoxComponent;
class UGGDynamicAssetHoldingComponent;
class UParticleSystemComponent;
class USceneComponent;
class UStaticMesh;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGToxicWastePortal : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* PortalParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* OverlapVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* PortalSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGDynamicAssetHoldingComponent* AssetHolding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* ToxicWasteMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGToxicWastePortal_Target* TeleportLocationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEasingFunc::Type> EasingFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuckInTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGToxicBarrelDisposed_Delegate OnToxicBarrelDisposed;
    
public:
    AGGToxicWastePortal(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnLoastSignificance(UGGDynamicAssetHoldingComponent* DynAssetComp);
    
    UFUNCTION(BlueprintCallable)
    void OnAssetLoadingFinished(UGGDynamicAssetHoldingComponent* DynAssetComp);
    
};

