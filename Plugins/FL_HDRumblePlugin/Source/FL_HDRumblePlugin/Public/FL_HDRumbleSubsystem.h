#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "FL_HDRumbleSubsystem.generated.h"

class AController;
class USoundSubmix;
class USoundSubmixBase;

UCLASS(Blueprintable)
class FL_HDRUMBLEPLUGIN_API UFL_HDRumbleSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundSubmix*> HDRumbleSubmixes;
    
public:
    UFL_HDRumbleSubsystem();

    UFUNCTION(BlueprintCallable)
    USoundSubmixBase* GetControllerSubmix_FromIndex(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    USoundSubmixBase* GetControllerSubmix_FromController(AController* Controller);
    
};

