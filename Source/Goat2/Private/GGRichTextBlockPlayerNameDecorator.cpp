#include "GGRichTextBlockPlayerNameDecorator.h"

UGGRichTextBlockPlayerNameDecorator::UGGRichTextBlockPlayerNameDecorator() : URichTextBlockDecorator(FObjectInitializer::Get()) {
    this->PlayerColorTag = TEXT("player");
    this->PlayerColorFormat = FText::FromString(TEXT("Color a text with the color of a player: <player_0>Text to color</>"));
    this->PlayerNameFormat = FText::FromString(TEXT("Add the player name with color: <player_0 />"));
}


