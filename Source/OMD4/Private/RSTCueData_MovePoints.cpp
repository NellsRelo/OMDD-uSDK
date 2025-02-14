#include "RSTCueData_MovePoints.h"
#include "Net/UnrealNetwork.h"

URSTCueData_MovePoints::URSTCueData_MovePoints() {
}

void URSTCueData_MovePoints::StartNewPath() {
}

void URSTCueData_MovePoints::ResetPath() {
}

void URSTCueData_MovePoints::AddPoint(const FVector& Point) {
}

void URSTCueData_MovePoints::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URSTCueData_MovePoints, Paths);
}


