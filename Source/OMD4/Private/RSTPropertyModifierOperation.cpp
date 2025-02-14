#include "RSTPropertyModifierOperation.h"

URSTPropertyModifierOperation::URSTPropertyModifierOperation() {
    this->bMapValue = false;
    this->Key = NULL;
    this->Value = NULL;
    this->AggregationMethod = ERSTPropertyAggregationMethod::Set;
    this->ValidityCheck = NULL;
}


