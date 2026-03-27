#pragma once
#include "CoreMinimal.h"
#include "GGGoatGear_Scene_Base.h"
#include "Templates/SubclassOf.h"
#include "GGGoatGear_Back_OwlCompanion.generated.h"

class AGGCompanion_Owl;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEARPACK_MAGIC_API UGGGoatGear_Back_OwlCompanion : public UGGGoatGear_Scene_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGCompanion_Owl> CompanionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Owl, meta=(AllowPrivateAccess=true))
    AGGCompanion_Owl* Owl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* PreviewOwl;
    
    UGGGoatGear_Back_OwlCompanion(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_Owl();
    
};

