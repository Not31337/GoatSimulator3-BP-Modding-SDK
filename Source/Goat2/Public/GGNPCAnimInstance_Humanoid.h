#pragma once
#include "CoreMinimal.h"
#include "GGNPCAnimInstance.h"
#include "GGNPCAnimInstanceHumanoidProxy.h"
#include "GGNPCAnimInstance_Humanoid.generated.h"

UCLASS(Blueprintable, NonTransient)
class GOAT2_API UGGNPCAnimInstance_Humanoid : public UGGNPCAnimInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGGNPCAnimInstanceHumanoidProxy Proxy;
    
public:
    UGGNPCAnimInstance_Humanoid();

};

