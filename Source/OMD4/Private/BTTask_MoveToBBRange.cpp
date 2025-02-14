#include "BTTask_MoveToBBRange.h"

UBTTask_MoveToBBRange::UBTTask_MoveToBBRange() {
    this->NodeName = TEXT("Move To BBRange");
    this->FilterClass = NULL;
    this->ObservedBlackboardValueTolerance = 5.00f;
    this->bObserveBlackboardValue = false;
    this->bAllowStrafe = false;
    this->bAllowPartialPath = true;
    this->bTrackMovingGoal = true;
    this->bProjectGoalLocation = true;
    this->bReachTestIncludesAgentRadius = true;
    this->bReachTestIncludesGoalRadius = true;
    this->FailureState = ERSTEnemyState::NotSet;
}


