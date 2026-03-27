#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GGCreateNPCUserWidget.generated.h"

class AGGNPC;
class AGGNPCVisualizer;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGCreateNPCUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NPCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPCVisualizer* NPCVisualizer;
    
    UGGCreateNPCUserWidget();

    UFUNCTION(BlueprintCallable)
    AGGNPC* SpawnNPC();
    
};

