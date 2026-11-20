#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "GGProxyNpc.h"
#include "GGProxyNpcComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGProxyNpcComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGProxyNpc NpcMeshes;
    
    UGGProxyNpcComponent(const FObjectInitializer& ObjectInitializer);

};

