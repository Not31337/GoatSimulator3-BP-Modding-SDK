#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "Engine/EngineTypes.h"
#include "GGConveyorComponent.generated.h"

class AActor;
class UGGPhysicalConveyorComponent;
class UGGPhysicalConveyorReverseComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGConveyorComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ConveyorEnabled, meta=(AllowPrivateAccess=true))
    bool bConveyorEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePhysicalConveyor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ConveyorSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsOnConveyor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGPhysicalConveyorComponent* PhysicalConveyor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGPhysicalConveyorReverseComponent* ReverseComponent;
    
    UGGConveyorComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetConveyorSpeed(float NewSpeed);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetConveyorEnabled(bool NewEnabled);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ConveyorEnabled();
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

