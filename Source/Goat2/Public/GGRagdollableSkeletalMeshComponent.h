#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "OnPhysStateChangedDelegate.h"
#include "OnSkeletalMeshSetDelegate.h"
#include "GGRagdollableSkeletalMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGRagdollableSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSkeletalMeshSet OnSkeletalMeshSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPhysStateChanged OnPhysStateChanged;
    
    UGGRagdollableSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

};

