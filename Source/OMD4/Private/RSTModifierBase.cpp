#include "RSTModifierBase.h"

URSTModifierBase::URSTModifierBase() {
    this->bIsTemporary = false;
    this->TargetMethod = ERSTModifierTargetMethod::None;
    this->TargetFilter = NULL;
    this->bApplyToSubobject = false;
    this->SubtargetMethod = NULL;
    this->bApplyOnce = false;
    this->bApplyOnSimulatedProxy = true;
    this->bIsCDO = true;
}






