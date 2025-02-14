#include "RSTPathNode.h"

FRSTPathNode::FRSTPathNode() {
    this->NodeType = ERSTPathPointType::Pathing;
    this->ReachRadius = 0.00f;
    this->AdvanceRadius = 0.00f;
    this->bIsStartNode = false;
    this->bIsExitNode = false;
    this->bHasVisited = false;
    this->bIsCurrent = false;
    this->UOCostToRift = 0.00f;
    this->CostToRift = 0.00f;
    this->AssociatedPathPoint = NULL;
}

