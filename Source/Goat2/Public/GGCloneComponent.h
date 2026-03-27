#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GGCloneRepVars.h"
#include "GGCloneComponent.generated.h"

class AGGNPC;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGCloneComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RepVars, meta=(AllowPrivateAccess=true))
    FGGCloneRepVars RepVars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_AttachedComponents, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> AttachedComponents;
    
    UGGCloneComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_RepVars();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AttachedComponents();
    
    UFUNCTION(BlueprintCallable)
    void OnNPCPooledOrMoved(AGGNPC* NPC, bool WasPooled);
    
};

