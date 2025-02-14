#include "RSTLaunchGameplayEffectComponent_Base.h"

URSTLaunchGameplayEffectComponent_Base::URSTLaunchGameplayEffectComponent_Base() {
    this->MaxWeightClass = ERSTCharacterWeightClass::Light;
    this->bRagdoll = true;
    this->bCancelKnockbacks = true;
    this->bUseWorldOriginForRotation = false;
}


