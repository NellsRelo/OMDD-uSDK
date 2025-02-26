#include "RSTInventoryManagerComponent.h"
#include "Net/UnrealNetwork.h"

URSTInventoryManagerComponent::URSTInventoryManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BarricadeItemDefinition = NULL;
    this->bItemInstancesAreAlwaysRelevant = false;
}

TArray<ARSTInventoryItemInstance*> URSTInventoryManagerComponent::GetAllItems() const {
    return TArray<ARSTInventoryItemInstance*>();
}

ARSTInventoryItemInstance* URSTInventoryManagerComponent::FindItemWithDefinition(const URSTInventoryItemDefinition* ItemDef) const {
    return NULL;
}

URSTInventoryManagerComponent* URSTInventoryManagerComponent::FindInventoryManagerComponent(AActor* InActor) {
    return NULL;
}

ARSTInventoryItemInstance* URSTInventoryManagerComponent::AddItemDefinition(const URSTInventoryItemDefinition* ItemDef) {
    return NULL;
}

void URSTInventoryManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URSTInventoryManagerComponent, InventoryList);
}


