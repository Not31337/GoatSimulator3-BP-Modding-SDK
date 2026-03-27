#pragma once
#include "CoreMinimal.h"
#include "EBlendspaceOverride.h"
#include "ECarryItemType.h"
#include "ENPCMontageSlots.h"
#include "GGNPCAnimInstanceProxy.h"
#include "GGStiffBones.h"
#include "GGNPCAnimInstanceHumanoidProxy.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FGGNPCAnimInstanceHumanoidProxy : public FGGNPCAnimInstanceProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ENPCMontageSlots CurrentMontageSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EBlendspaceOverride BlendSpaceOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPanicking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDisgusted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPassenger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool NPCMovementBSValueOverZero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGGStiffBones StiffBodyParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECarryItemType NPCCarryItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AlphaPointAtTargetIKNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AlphaElbowBlendingPointAtTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTimePointingAtTarget;
    
    FGGNPCAnimInstanceHumanoidProxy();
};

