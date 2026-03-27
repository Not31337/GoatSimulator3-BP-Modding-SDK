#include "GGRichTextBlockInputDecorator.h"

UGGRichTextBlockInputDecorator::UGGRichTextBlockInputDecorator() : URichTextBlockDecorator(FObjectInitializer::Get()) {
    this->HoldMaterial = NULL;
    this->HoldOutlineSize = 0.15f;
    this->HoldTimeReduction = 0.20f;
    this->HoldMinDuration = 0.15f;
    this->HoldAnimationStart = 0.05f;
    this->bShowWarnings = false;
    this->ButtonNameTable = NULL;
}

UDataTable* UGGRichTextBlockInputDecorator::GetInputButtonIcons_Implementation() const {
    return NULL;
}


