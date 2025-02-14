#include "RSTSplineComponent.h"

URSTSplineComponent::URSTSplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FSplinePoint URSTSplineComponent::GetWorldSpaceSplinePointAtIndex(int32 Index) {
    return FSplinePoint{};
}

void URSTSplineComponent::AddWorldSpaceSplinePoint(const FSplinePoint& SplinePoint, bool bUpdateSpline) {
}


