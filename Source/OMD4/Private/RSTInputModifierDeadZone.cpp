#include "RSTInputModifierDeadZone.h"

URSTInputModifierDeadZone::URSTInputModifierDeadZone() {
    this->Type = EDeadZoneType::Radial;
    this->UpperThreshold = 1.00f;
    this->DeadzoneStick = EDeadzoneStick::MoveStick;
}


