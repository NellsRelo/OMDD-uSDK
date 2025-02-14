#include "VASMComponent.h"

UVASMComponent::UVASMComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UVASMComponent::SetVariationByName(FName Variation) {
}

void UVASMComponent::SetRuntimeComponent(UVARuntimeComponent* Component) {
}

TArray<FName> UVASMComponent::GetVariationNames() const {
    return TArray<FName>();
}

TArray<FName> UVASMComponent::GetRuntimeComponentNames() {
    return TArray<FName>();
}

UVARuntimeComponent* UVASMComponent::GetRuntimeComponent() const {
    return NULL;
}


