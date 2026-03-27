#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GGInstinct.h"
#include "RagdollStateChangeSettings.h"
#include "GGInstinct_HexagonJump.generated.h"

class ACharacter;
class AGGGoat;
class ULSCharacterMovementComponent;
class UMaterialInterface;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGInstinct_HexagonJump : public AGGInstinct {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInterface>> HexagonMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInterface>> MobileHexagonMaterials;
    
public:
    AGGInstinct_HexagonJump(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void GoatRagdolled(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
    UFUNCTION(BlueprintCallable)
    void GoatMovementModeChanged(ACharacter* CharacterGoat, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
    UFUNCTION(BlueprintCallable)
    void GoatJumpedWithModifier(AGGGoat* Goat, const FFindFloorResult& Floor, bool bWasBouncyJump);
    
};

