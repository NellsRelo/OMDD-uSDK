#include "RSTAttachmentManagerComponent.h"
#include "Net/UnrealNetwork.h"

URSTAttachmentManagerComponent::URSTAttachmentManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void URSTAttachmentManagerComponent::TriggerPlayerAttachmentEvent(ERSTPlayerAttachmentEventType Event, FGameplayTag AttachmentSlot, FGameplayTagContainer AdditionalContextData) {
}

FRSTAttachmentTransactionHandle URSTAttachmentManagerComponent::ShowGroup(FGameplayTagContainer Groups) {
    return FRSTAttachmentTransactionHandle{};
}

FRSTAttachmentTransactionHandle URSTAttachmentManagerComponent::ShowExclusiveGroups(FGameplayTagContainer Groups, FGameplayTagContainer Ignore) {
    return FRSTAttachmentTransactionHandle{};
}

FRSTAttachmentTransactionHandle URSTAttachmentManagerComponent::SetGroupVisibility(FGameplayTagContainer Groups, bool bVisible) {
    return FRSTAttachmentTransactionHandle{};
}

void URSTAttachmentManagerComponent::ResetAttachmentStack() {
}

bool URSTAttachmentManagerComponent::RemoveSkinVisuals(const URSTSkinDefinition* Skin) {
    return false;
}

void URSTAttachmentManagerComponent::RemoveAttachmentTransactionByHandle(FRSTAttachmentTransactionHandle& InOutHandle) {
}

void URSTAttachmentManagerComponent::RemoveAttachmentFromDefinition(const URSTAttachmentDefinition* AttachmentDefinition, bool bReplicate) {
}

void URSTAttachmentManagerComponent::RemoveAttachment(const FGameplayTag& SlotIdentifier, bool bReplicate) {
}

void URSTAttachmentManagerComponent::RemoveAllAttachments() {
}

void URSTAttachmentManagerComponent::OnSpawnedAttachementEndPlay(AActor* InSource, TEnumAsByte<EEndPlayReason::Type> Reason) {
}

void URSTAttachmentManagerComponent::OnRep_ReplicatedSlotData() {
}

void URSTAttachmentManagerComponent::OnRep_ReplicatedShownGroups() {
}

void URSTAttachmentManagerComponent::OnParentHiddenInGame(AActor* SelfActor, bool bIsHidden) {
}

FRSTAttachmentTransactionHandle URSTAttachmentManagerComponent::HideGroup(FGameplayTagContainer Groups) {
    return FRSTAttachmentTransactionHandle{};
}

bool URSTAttachmentManagerComponent::HasAttachment(const FGameplayTag& SlotIdentifier) const {
    return false;
}

ARSTAttachment* URSTAttachmentManagerComponent::GetSpawnedAttachmentForSlot(const FGameplayTag& SlotIdentifier) const {
    return NULL;
}

void URSTAttachmentManagerComponent::GetAttachments(TArray<ARSTAttachment*>& Attachments) const {
}

void URSTAttachmentManagerComponent::GetAttachmentMeshes(TArray<UMeshComponent*>& AttachmentMeshes, bool bClearArray) const {
}

void URSTAttachmentManagerComponent::GetAttachmentFXSystems(TArray<UFXSystemComponent*>& AttachmentFXSystems, bool bClearArray) const {
}

URSTAttachmentDefinition* URSTAttachmentManagerComponent::GetAttachmentDefinitionForSlot(const FGameplayTag& SlotIdentifier) const {
    return NULL;
}

URSTAttachmentManagerComponent* URSTAttachmentManagerComponent::FindAttachmentManagerComponent(const AActor* Actor) {
    return NULL;
}

bool URSTAttachmentManagerComponent::ApplySkinVisuals(const URSTSkinDefinition* Skin) {
    return false;
}

void URSTAttachmentManagerComponent::AddAttachment(const URSTAttachmentDefinition* AttachmentDefinition, bool bWarnDuplicates, bool bReplicate) {
}

void URSTAttachmentManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URSTAttachmentManagerComponent, ReplicatedShownGroups);
    DOREPLIFETIME(URSTAttachmentManagerComponent, ReplicatedSlotData);
}


