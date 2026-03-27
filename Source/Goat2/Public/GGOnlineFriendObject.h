#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GGListElementSortingInterface.h"
#include "GGOnlineFriend.h"
#include "GGOnlineFriendObject.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGOnlineFriendObject : public UObject, public IGGListElementSortingInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGOnlineFriend Friend;
    
    UGGOnlineFriendObject();


    // Fix for true pure virtual functions not being implemented
};

