#pragma once
#include "CoreMinimal.h"
#include "GGWorldSubsystem.h"
#include "GGLandscapes.generated.h"

class ALandscape;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API UGGLandscapes : public UGGWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALandscape*> Landscapes;
    
    UGGLandscapes();

};

