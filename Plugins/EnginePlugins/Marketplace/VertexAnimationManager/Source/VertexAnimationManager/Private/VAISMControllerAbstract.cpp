#include "VAISMControllerAbstract.h"

UVAISMControllerAbstract::UVAISMControllerAbstract(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InstancedManager = NULL;
    this->InstanceIndex = -1;
    this->NumAdditionalCustomDataFloats = 0;
    this->bBatchUpdateTransform = true;
    this->bVelocity = false;
}

void UVAISMControllerAbstract::UpdateInstanceTransformDeferred(const FTransform& InTransform) {
}

void UVAISMControllerAbstract::UpdateInstanceTransform(const FTransform& InTransform, bool bMarkRenderStateDirty) {
}

void UVAISMControllerAbstract::SetVariationByName(FName Variation) {
}

void UVAISMControllerAbstract::SetRuntimeComponent(UVARuntimeComponent* Component) {
}

void UVAISMControllerAbstract::SetInstancedComponent(UInstancedStaticMeshComponent* InComponent) {
}

bool UVAISMControllerAbstract::SetCustomDataValue(int32 CustomDataIndex, float CustomDataValue, bool bMarkRenderStateDirty) {
    return false;
}

bool UVAISMControllerAbstract::SetCustomData(const TArray<float>& InCustomData, bool bMarkRenderStateDirty) {
    return false;
}

UInstancedStaticMeshComponent* UVAISMControllerAbstract::NewInstancedComponent() {
    return NULL;
}

TArray<FName> UVAISMControllerAbstract::GetVariationNames() const {
    return TArray<FName>();
}

TArray<FName> UVAISMControllerAbstract::GetRuntimeComponentNames() const {
    return TArray<FName>();
}

UVARuntimeComponent* UVAISMControllerAbstract::GetRuntimeComponent() const {
    return NULL;
}

UInstancedStaticMeshComponent* UVAISMControllerAbstract::GetInstancedComponent() const {
    return NULL;
}


