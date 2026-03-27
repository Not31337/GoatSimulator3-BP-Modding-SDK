#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GGLobbyMember.h"
#include "GGLobbyMemberObject.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGLobbyMemberObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGLobbyMember LobbyMember;
    
    UGGLobbyMemberObject();

};

