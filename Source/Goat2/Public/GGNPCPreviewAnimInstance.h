#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GGRandomPlayerSequenceEntry.h"
#include "GGNPCPreviewAnimInstance.generated.h"

class AGGNPCSpawner_Environment;
class USkeletalMeshComponent;

UCLASS(Blueprintable, NonTransient)
class GOAT2_API UGGNPCPreviewAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGGNPCSpawner_Environment* CachedSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* CachedSkelMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasValidRandomSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGGRandomPlayerSequenceEntry> ValidRandomSequences;
    
    UGGNPCPreviewAnimInstance();

};

