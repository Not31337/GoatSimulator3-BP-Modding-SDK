#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "GGExtraLimbMeshComponent.generated.h"

class UGGExtraLimbComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATAPOCALYPSE_API UGGExtraLimbMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGExtraLimbComponent* OwnerExtraLimbComp;
    
    UGGExtraLimbMeshComponent(const FObjectInitializer& ObjectInitializer);

};

