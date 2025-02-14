#include "RSTHotbarComponent.h"
#include "Net/UnrealNetwork.h"

URSTHotbarComponent::URSTHotbarComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Slots.AddDefaulted(11);
    this->SlotCount = 0;
    this->ActiveSlotIndex = -1;
}

void URSTHotbarComponent::SetActiveSlotIndex(int32 NewIndex) {
}

void URSTHotbarComponent::Server_SetActiveSlotIndex_Implementation(int32 NewIndex) {
}

void URSTHotbarComponent::Server_RemoveItemFromSlot_Implementation(int32 SlotIndex) {
}

void URSTHotbarComponent::Server_AddItemToSlot_Implementation(int32 SlotIndex, ARSTInventoryItemInstance* Item) {
}

ARSTInventoryItemInstance* URSTHotbarComponent::RemoveItemFromSlot(int32 SlotIndex) {
    return NULL;
}

void URSTHotbarComponent::OnRep_Slots() {
}

void URSTHotbarComponent::OnRep_SlotCount() {
}

void URSTHotbarComponent::OnRep_ActiveSlotIndex(int32 PreviousSlotIndex) {
}

int32 URSTHotbarComponent::IndexOfItem(ARSTInventoryItemInstance* Item) const {
    return 0;
}

TArray<ARSTInventoryItemInstance*> URSTHotbarComponent::GetSlots() const {
    return TArray<ARSTInventoryItemInstance*>();
}

ARSTInventoryItemInstance* URSTHotbarComponent::GetActiveSlotItem() const {
    return NULL;
}

int32 URSTHotbarComponent::GetActiveSlotIndex() const {
    return 0;
}

void URSTHotbarComponent::CycleActiveSlotForward() {
}

void URSTHotbarComponent::CycleActiveSlotBackward() {
}

void URSTHotbarComponent::Client_SetActiveSlotIndex_Implementation(int32 NewIndex) {
}

bool URSTHotbarComponent::AddItemToSlot(int32 SlotIndex, ARSTInventoryItemInstance* Item, ARSTInventoryItemInstance*& OutRemovedItem) {
    return false;
}

void URSTHotbarComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URSTHotbarComponent, Slots);
    DOREPLIFETIME(URSTHotbarComponent, SlotCount);
    DOREPLIFETIME(URSTHotbarComponent, ActiveSlotIndex);
}


