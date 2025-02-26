#include "RSTInventoryItemInstance.h"
#include "Net/UnrealNetwork.h"
#include "RSTModifierComponent.h"
#include "Templates/SubclassOf.h"

ARSTInventoryItemInstance::ARSTInventoryItemInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->ModifierComponent = CreateDefaultSubobject<URSTModifierComponent>(TEXT("ModifierComponent"));
    this->ItemDef = NULL;
    this->bIsInHotbar = false;
}

void ARSTInventoryItemInstance::SetItemUpgradePreview(const URSTItemUpgradeDefinition* ItemUpgrade, int32 UpgradeLevel) {
}

void ARSTInventoryItemInstance::SetItemDef(const URSTInventoryItemDefinition* InDef) {
}

void ARSTInventoryItemInstance::Server_ConfirmItemUpgrades_Implementation(const TArray<FRSTInventoryItemUpgradeRequest>& Requests, int32 TotalSkullCost) {
}

bool ARSTInventoryItemInstance::RequestItemUpgrades() {
    return false;
}

bool ARSTInventoryItemInstance::IsHiddenInSpellbook() const {
    return false;
}

int32 ARSTInventoryItemInstance::GetTotalPreviewUpgradeSkullCost() const {
    return 0;
}

int32 ARSTInventoryItemInstance::GetPreviewItemUpgradeLevel(const URSTItemUpgradeDefinition* ItemUpgrade) const {
    return 0;
}

int32 ARSTInventoryItemInstance::GetNextPreviewUpgradeSkullCost() const {
    return 0;
}

TArray<URSTItemUpgradeDefinition*> ARSTInventoryItemInstance::GetItemUpgrades() const {
    return TArray<URSTItemUpgradeDefinition*>();
}

FText ARSTInventoryItemInstance::GetDisplayName() const {
    return FText::GetEmpty();
}

FText ARSTInventoryItemInstance::GetDisplayDescription() const {
    return FText::GetEmpty();
}

int32 ARSTInventoryItemInstance::GetConfirmedItemUpgradeLevel(const URSTItemUpgradeDefinition* ItemUpgrade) const {
    return 0;
}

URSTInventoryItemFragment* ARSTInventoryItemInstance::FindFragmentByClass(TSubclassOf<URSTInventoryItemFragment> FragmentClass) const {
    return NULL;
}

void ARSTInventoryItemInstance::Client_ConfirmItemUpgrades_Implementation(bool bSuccess, int32 TotalSkullCost) {
}

void ARSTInventoryItemInstance::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARSTInventoryItemInstance, ItemDef);
    DOREPLIFETIME(ARSTInventoryItemInstance, ConfirmedUpgradeLevels);
}


