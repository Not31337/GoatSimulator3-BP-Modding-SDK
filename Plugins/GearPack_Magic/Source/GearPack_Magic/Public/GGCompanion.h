#pragma once
#include "CoreMinimal.h"
#include "Animation/PoseSnapshot.h"
#include "EGGCompanionState.h"
#include "GGOnCampanionChangedState_DelegateDelegate.h"
#include "GGCompanion.generated.h"

class AGGGoat;
class APawn;
class ILSReplicatedMeshRPCs;
class ULSReplicatedMeshRPCs;
class USceneComponent;
class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct GEARPACK_MAGIC_API FGGCompanion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    APawn* Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* RagdollMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGGCompanionState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanChangeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float TimeStampChangedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoat* LickedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float TimeStampLicked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoat* GoatOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SitAttachComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TScriptInterface<ILSReplicatedMeshRPCs> ReplicatedMeshRPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FPoseSnapshot PoseSnapshot;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FGGOnCampanionChangedState_Delegate OnStateChanged;
    
    FGGCompanion();
};

