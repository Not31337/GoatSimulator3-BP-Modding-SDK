#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELSGait.h"
#include "GGDisguiseComponent.h"
#include "RagdollStateChangeSettings.h"
#include "GGCappyHatDisguiseComponent.generated.h"

class ACharacter;
class ULSCharacterMovementComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATMULTIVERSE_API UGGCappyHatDisguiseComponent : public UGGDisguiseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CappyHatMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* CappyHatMesh;
    
public:
    UGGCappyHatDisguiseComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerSetGait(ELSGait Gait);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerMove(FVector Direction);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerHeadbutt(FVector Direction);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerCharacterJump();
    
    UFUNCTION(BlueprintCallable)
    void OnRagdolled(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdolledCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
    UFUNCTION(BlueprintCallable)
    void Headbutt();
    
};

