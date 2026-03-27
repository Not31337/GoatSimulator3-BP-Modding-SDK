#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ComponentInstanceDataCache.h"
#include "Components/SplineComponent.h"
#include "Components/SplineMeshComponent.h"
#include "Components/SplineComponent.h"
#include "GGInteractInterface.h"
#include "GGGrindableSplineComponent.generated.h"

class AActor;
class AGGPlayerController;
class UGGGrindableSplineComponent;
class UMaterialInterface;
class USceneComponent;
class USplineMeshComponent;
class UStaticMesh;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGGrindableSplineComponent : public USplineComponent, public IGGInteractInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Tangent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USplineMeshComponent*> SplineMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> EndPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> EndPointOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EndPointTag;
    
public:
    UGGGrindableSplineComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateSplineMeshes();
    
    UFUNCTION(BlueprintCallable)
    bool UpdateLastSplineSection();
    
    UFUNCTION(BlueprintCallable)
    void SetSplineSection(int32 StartSplinePoint, const FVector& NewStartLocation, const FVector& NewStartTangent, const FVector& NewNextSplineLocation, const FVector& NewNextTangent, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Interact(AActor* SourceActor, float HeldFor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetRequiredHoldDuration();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetInteractTextTitle(AGGPlayerController* InteractingPlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetInteractTextBody(AGGPlayerController* InteractingPlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetAutoInteractPastDuration();
    
    UFUNCTION(BlueprintCallable)
    static UGGGrindableSplineComponent* CreateGrindableSplineComponent(AActor* Owner, UStaticMesh* SplineMesh, FName SplineCompName, USceneComponent* StartPoint, USceneComponent* NewEndPoint, TEnumAsByte<ESplineMeshAxis::Type> MeshForwardAxis, float VerticalTangent, float MeshScale, float CullDistance, bool bShouldCastShadows, UMaterialInterface* OverrideMeshMaterial, EComponentCreationMethod SplineCreationMethod);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeInteractedWith(AActor* SourceActor);
    
    UFUNCTION(BlueprintCallable)
    void AddSplineSectionWithNewEndPoint(USceneComponent* NewEndPoint);
    
    UFUNCTION(BlueprintCallable)
    void AddSplineSectionAtLocation(FVector NewEndPointLocation);
    

    // Fix for true pure virtual functions not being implemented
};

