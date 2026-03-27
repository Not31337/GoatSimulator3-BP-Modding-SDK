#include "AttachmentElement.h"

FAttachmentElement::FAttachmentElement() {
    this->bIsGuaranteed = false;
    this->ArrayIndex = 0;
    this->AttachmentComponent = NULL;
    this->bConsiderForCharacterOverlap = false;
}

