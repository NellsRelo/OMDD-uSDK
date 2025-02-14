#include "RSTMilestoneOperationStat.h"

URSTMilestoneOperationStat::URSTMilestoneOperationStat() {
    this->TargetValue = 0;
    this->bCumulative = false;
    this->StatType = ERSTStatType::Persistent;
    this->ComparisonMethod = ERSTMilestoneComparisonMethod::GreaterThanEqual;
}


