#include "RSTItemAttribute.h"

URSTItemAttribute::URSTItemAttribute() {
    this->UpgradeLevel = 0;
    this->PreviewUpgradeLevel = 0;
    this->Format = ERSTInventoryItemPropertyDisplayFormat::Basic;
    this->bIsModified = false;
}

FText URSTItemAttribute::GetValueText() const {
    return FText::GetEmpty();
}


