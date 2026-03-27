#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GGVehicleCustomization_DelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "GGVehicleCustomizationComponent.generated.h"

class UGGVehicleCustomizationDataAsset;
class UGGVehicleWheelMesh;
class UMaterialInterface;
class UMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATAPOCALYPSE_API UGGVehicleCustomizationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGVehicleCustomization_Delegate OnPaintChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGVehicleCustomization_Delegate OnWheelsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGVehicleCustomization_Delegate OnBodyKitChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PossibleWheelSockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGVehicleWheelMesh> WheelMeshClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanChangeWheels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasWheelsOnBodyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGVehicleCustomizationDataAsset* DefaultWheels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WheelAttachDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanChangePaint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGVehicleCustomizationDataAsset* DefaultBodyKit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* VisualMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActivePaint, meta=(AllowPrivateAccess=true))
    UGGVehicleCustomizationDataAsset* ActivePaint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActiveWheels, meta=(AllowPrivateAccess=true))
    UGGVehicleCustomizationDataAsset* ActiveWheels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UGGVehicleWheelMesh*> WheelMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGGVehicleWheelMesh*> EditorPreviewWheelMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActiveBodyKit, meta=(AllowPrivateAccess=true))
    UGGVehicleCustomizationDataAsset* ActiveBodyKit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> DefaultMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> BodyKitMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> PreviewBodyKitMeshes;
    
    UGGVehicleCustomizationComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveWheels(UGGVehicleCustomizationDataAsset* OldWheels);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActivePaint(UGGVehicleCustomizationDataAsset* OldPaint);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveBodyKit(UGGVehicleCustomizationDataAsset* OldBodyKit);
    
};

