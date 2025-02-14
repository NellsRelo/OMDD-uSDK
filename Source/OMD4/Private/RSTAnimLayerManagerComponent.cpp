#include "RSTAnimLayerManagerComponent.h"
#include "Templates/SubclassOf.h"

URSTAnimLayerManagerComponent::URSTAnimLayerManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

URSTAnimLayerManagerComponent* URSTAnimLayerManagerComponent::FindAnimLayerManagerComponent(const AActor* Actor) {
    return NULL;
}

FRSTAnimLayerHandle URSTAnimLayerManagerComponent::AddAnimLayer(TSubclassOf<UAnimInstance> LayerClass) {
    return FRSTAnimLayerHandle{};
}


