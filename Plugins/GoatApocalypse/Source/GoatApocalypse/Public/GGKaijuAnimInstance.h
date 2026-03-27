#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GGGoatAnimInstance.h"
#include "EKaijuBeamState.h"
#include "GGKaijuAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class GOATAPOCALYPSE_API UGGKaijuAnimInstance : public UGGGoatAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKaijuBeamState KaijuBeamState;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRotateHead;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LookAtLocation;
    
    UGGKaijuAnimInstance();

};

