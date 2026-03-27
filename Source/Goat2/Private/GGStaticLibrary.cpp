#include "GGStaticLibrary.h"

UGGStaticLibrary::UGGStaticLibrary() {
}

void UGGStaticLibrary::SetFocusedSplitscreenPlayerIndex(const UObject* WorldContextObject, int32 PlayerIndex) {
}

FText UGGStaticLibrary::RemoveTextFormatting(const FText& InText) {
    return FText::GetEmpty();
}

FText UGGStaticLibrary::RemoveLinebreaks(const FText& InText, bool bReplaceWithSpace) {
    return FText::GetEmpty();
}

int32 UGGStaticLibrary::GetNetPlayerIndex(const APlayerController* PlayerController) {
    return 0;
}

int32 UGGStaticLibrary::GetFocusedSplitscreenPlayerIndex(const UObject* WorldContextObject) {
    return 0;
}

float UGGStaticLibrary::GetActorsMass(const AActor* InActor, bool bGetPhysicsAssetsMass) {
    return 0.0f;
}


