#include "RSTPathPoint.h"

ARSTPathPoint::ARSTPathPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PathPointType = ERSTPathPointType::Both;
    this->ReachRadius = 100.00f;
    this->AdvanceRadius = 400.00f;
    this->bIsStartPoint = false;
    this->bIsExitPoint = false;
}


