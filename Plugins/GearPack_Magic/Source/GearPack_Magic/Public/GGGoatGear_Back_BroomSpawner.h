#pragma once
#include "CoreMinimal.h"
#include "GGGoatGear_Static_Base.h"
#include "GGSpawnedBroom.h"
#include "Templates/SubclassOf.h"
#include "GGGoatGear_Back_BroomSpawner.generated.h"

class AGGFlyingBroom;
class UGGFlyingBroomAnimInstance;
class UGGGearAbility_BroomSpawner;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEARPACK_MAGIC_API UGGGoatGear_Back_BroomSpawner : public UGGGoatGear_Static_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpawnedBroom, meta=(AllowPrivateAccess=true))
    FGGSpawnedBroom SpawnedBroom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGearAbility_BroomSpawner* BroomSpawnerAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGFlyingBroom> BroomClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* PreviewBroomMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGFlyingBroomAnimInstance* PreviewBroomAnimInstance;
    
    UGGGoatGear_Back_BroomSpawner(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_SpawnedBroom();
    
};

