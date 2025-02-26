#include "RSTActorOpacityComponent.h"

URSTActorOpacityComponent::URSTActorOpacityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OpacityAdjustRate = 5.00f;
    this->OpacityMaterialParameterName = TEXT("RenderOpacity");
}

void URSTActorOpacityComponent::SetTargetOpacity(FRSTActorOpacityHandle& InOutOperationHandle, float InOpacity) {
}

void URSTActorOpacityComponent::SetCurrentOpacity(FRSTActorOpacityHandle& InOutOperationHandle, float InOpacity) {
}

void URSTActorOpacityComponent::OnMeshesChanged() {
}

void URSTActorOpacityComponent::ClearOpacityTarget(FRSTActorOpacityHandle& InOutOperationHandle, bool bInstant) {
}


