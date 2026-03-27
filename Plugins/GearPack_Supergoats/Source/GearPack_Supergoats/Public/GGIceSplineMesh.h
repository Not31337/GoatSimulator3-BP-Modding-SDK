#pragma once
#include "CoreMinimal.h"
#include "Components/SplineMeshComponent.h"
#include "ESectionType.h"
#include "IceSectionSettings.h"
#include "GGIceSplineMesh.generated.h"

class AGGIcePathSpline;
class UParticleSystemComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEARPACK_SUPERGOATS_API UGGIceSplineMesh : public USplineMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGIcePathSpline* OwnerPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESectionType SectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IceSectionSettings, meta=(AllowPrivateAccess=true))
    FIceSectionSettings IceSectionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Block, meta=(AllowPrivateAccess=true))
    bool bBlock;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_CurrentHealth, meta=(AllowPrivateAccess=true))
    int16 CurrentHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* SpawnParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* OngoingPreShatterParticle;
    
public:
    UGGIceSplineMesh(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void StartBlocking();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IceSectionSettings();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentHealth();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Block();
    
};

