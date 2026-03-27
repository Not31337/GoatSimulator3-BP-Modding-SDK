#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGGrapplingBow_Plunger.generated.h"

class UCableComponent;
class UMeshComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class GEARCOMPETITION_API AGGGrapplingBow_Plunger : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkelMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCableComponent* CableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RopeBaseSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_AttachRopeMeshComp, meta=(AllowPrivateAccess=true))
    UMeshComponent* AttachRopeMeshComp;
    
    AGGGrapplingBow_Plunger(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_AttachRopeMeshComp();
    
};

