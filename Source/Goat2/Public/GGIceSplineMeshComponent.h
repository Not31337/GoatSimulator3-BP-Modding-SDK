#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SplineMeshComponent.h"
#include "Engine/EngineTypes.h"
#include "IceSectionParams.h"
#include "GGIceSplineMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGIceSplineMeshComponent : public USplineMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle MakeSlipperyTH;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle ShatterTH;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath SlipperyMaterialPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IceSectionParams, meta=(AllowPrivateAccess=true))
    FIceSectionParams IceSectionParams;
    
public:
    UGGIceSplineMeshComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Shatter();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_IceSectionParams();
    
public:
    UFUNCTION(BlueprintCallable)
    void MakeSlippery();
    
};

