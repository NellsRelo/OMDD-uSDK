#include "VAHISMController.h"

UVAHISMController::UVAHISMController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InstancedComponent = NULL;
}

UHierarchicalInstancedStaticMeshComponent* UVAHISMController::GetHierarchicalInstancedComponent() const {
    return NULL;
}


