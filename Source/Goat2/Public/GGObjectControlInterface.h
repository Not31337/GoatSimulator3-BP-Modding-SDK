#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InputCoreTypes.h"
#include "EPostProcessCameraContext.h"
#include "GGObjectControlInterface.generated.h"

class AGGPlayerController;

UINTERFACE(Blueprintable)
class GOAT2_API UGGObjectControlInterface : public UInterface {
    GENERATED_BODY()
};

class GOAT2_API IGGObjectControlInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WalkUp();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WalkDown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Turn(float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ToggleSlowMotionUp();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ToggleSlowMotionDown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ToggleRagdoll();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SprintUp();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SprintDown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Sprint(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SpinToggleUp();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SpinToggleDown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SlowMotion();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ScrollUp();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ScrollDown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RagdollUp();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RagdollDown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ObjectControlStarted(AGGPlayerController* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ObjectControlEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool MoveUp(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool MoveRight(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool MoveForward(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool LookUp(float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool LickAbilityUp();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool LickAbilityDown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool InteractUp();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool InteractDown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool InputKeyReleased(FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool InputKeyPressed(FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HeadbuttUp();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HeadbuttDown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GoatBaaUp();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GoatBaaDown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EPostProcessCameraContext GetPostProcessCameraContext() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CharacterStopJumping();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CharacterJump();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AbilityUp();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AbilityDown();
    
};

