#include "RSTEquipmentManagerComponent.h"
#include "Net/UnrealNetwork.h"

URSTEquipmentManagerComponent::URSTEquipmentManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EquippedItem = NULL;
}

void URSTEquipmentManagerComponent::OnRevived(AActor* OwningActor, const AActor* InInstigator) {
}

void URSTEquipmentManagerComponent::OnRep_EquippedItem(ARSTInventoryItemInstance* UnequippedItem) {
}

void URSTEquipmentManagerComponent::OnDowned(AActor* OwningActor, const AActor* InInstigator) {
}

void URSTEquipmentManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URSTEquipmentManagerComponent, EquippedItem);
}


