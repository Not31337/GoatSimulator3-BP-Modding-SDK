#include "RichInputRow.h"

FRichInputRow::FRichInputRow() {
    this->Rotation = 0.00f;
    this->IconScale = 0.00f;
    this->IconPadding = 0.00f;
    this->SizeType = EInlineImageSizeType::FitLineHeight;
    this->bSupportsInputText = false;
}

