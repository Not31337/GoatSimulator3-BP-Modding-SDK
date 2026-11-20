#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GGUserWidget.h"
#include "GGFriendListAvatarUserWidget.generated.h"

class UImage;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UTexture;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGFriendListAvatarUserWidget : public UGGUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DefaultAvatarMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DummyFriendTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DummyFriendReferenceColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Background;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* EmptyIcon;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MaterialInstance;
    
public:
    UGGFriendListAvatarUserWidget();

    UFUNCTION(BlueprintCallable)
    void SetFriendWithURL(const FString& InName, const FString& InPicURL, FLinearColor FallbackColor);
    
    UFUNCTION(BlueprintCallable)
    void SetFriendAvatar(UTexture* InTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetDummyFriend(const FString& InName, FLinearColor OverrideColor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DowloadAndSetImageAsync(const FString& URL);
    
};

