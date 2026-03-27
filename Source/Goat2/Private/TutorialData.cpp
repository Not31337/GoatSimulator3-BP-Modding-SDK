#include "TutorialData.h"

FTutorialData::FTutorialData() {
    this->Persistence = ETutorialPersistence::OncePerSave;
    this->MaxCount = 0;
    this->SplitScreenBehaviour = ETutorialSplitScreenBehaviour::None;
}

