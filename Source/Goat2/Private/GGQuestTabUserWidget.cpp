#include "GGQuestTabUserWidget.h"

UGGQuestTabUserWidget::UGGQuestTabUserWidget() {
    this->DefaultQuestProgressFormat = FText::FromString(TEXT("{Progress}/{Target}"));
    this->EventHelpText = FText::FromString(TEXT("<Bold>Events</>\n<Special>Events</> are quests you find in the world. Completing them earns you <Special>Karma</>, <Special>Illuminati Points</> and other surprises!\nUse <icon id=\"MapLocation\"/> to see where events are located on the map."));
    this->QuestList = NULL;
    this->AchievementImageIcon = NULL;
    this->AchievementTotalAmountLabel = NULL;
}


