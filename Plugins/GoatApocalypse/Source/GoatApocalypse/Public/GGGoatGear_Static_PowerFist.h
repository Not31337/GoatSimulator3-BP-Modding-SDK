#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GGGoatGear_Static_Base.h"
#include "RepelModifiers.h"
#include "GGPowerFistTargetOverlay.h"
#include "Templates/SubclassOf.h"
#include "GGGoatGear_Static_PowerFist.generated.h"

class AActor;
class AGGGoat;
class UGGTargetOverlayUserWidget;
class UParticleSystem;
class UPrimitiveComponent;
class USphereComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATAPOCALYPSE_API UGGGoatGear_Static_PowerFist : public UGGGoatGear_Static_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRepelModifiers HeadbuttModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighlightDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NPCsForInstinct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGTargetOverlayUserWidget> TargetOverlayWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PSHitTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PSGearBurst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* HighlightRangeSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FGGPowerFistTargetOverlay> WidgetComponents;
    
    UGGGoatGear_Static_PowerFist(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnHighlightRangeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnHighlightRangeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGoatHeadbutted(AGGGoat* GoatHeadbutting, bool bHitSomething, const TArray<AActor*>& HeadbuttedActors, bool bIsChargeHeadbutt);
    
};

