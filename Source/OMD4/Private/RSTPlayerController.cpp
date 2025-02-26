#include "RSTPlayerController.h"
#include "RNetworkProxyOwnerComponent.h"
#include "RSTFlyoffComponent.h"
#include "RSTPlayerCameraManager.h"

ARSTPlayerController::ARSTPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCameraManagerClass = ARSTPlayerCameraManager::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
    this->NetworkProxyOwnerComponent = CreateDefaultSubobject<URNetworkProxyOwnerComponent>(TEXT("NetworkProxyOwnerComponent"));
    this->FlyoffComponent = CreateDefaultSubobject<URSTFlyoffComponent>(TEXT("FlyoffComponent"));
}

void ARSTPlayerController::UnloadStreamLevel(FName LevelName) {
}

void ARSTPlayerController::SkinDefinitionLoaded(FPrimaryAssetId DefinitionId) {
}

void ARSTPlayerController::SetIsAutoRunning(const bool bEnabled) {
}

void ARSTPlayerController::SetHasViewedIntro() {
}

void ARSTPlayerController::ServerCheatAll_Implementation(const FString& Msg) {
}
bool ARSTPlayerController::ServerCheatAll_Validate(const FString& Msg) {
    return true;
}

void ARSTPlayerController::ServerCheat_Implementation(const FString& Msg) {
}
bool ARSTPlayerController::ServerCheat_Validate(const FString& Msg) {
    return true;
}

void ARSTPlayerController::Server_SetUnlockedHeroes_Implementation(FGameplayTagContainer UnlockedHeroes) {
}

void ARSTPlayerController::Server_SetSelectedUpgrades_Implementation(const TArray<URSTUpgradeDefinition*>& Upgrades) {
}

void ARSTPlayerController::Server_SetSelectedSkins_Implementation(const TArray<FRSTSelectedSkinRepl>& SelectedSkins) {
}

void ARSTPlayerController::Server_SetHotbarItems_Implementation(const TArray<URSTInventoryItemDefinition*>& HotbarItems) {
}

void ARSTPlayerController::Server_SetGrantedKeys_Implementation(const TArray<FGameplayTag>& KeyGrants) {
}

void ARSTPlayerController::Server_SelectHero_Implementation(FGameplayTag SelectedHeroTag) {
}

void ARSTPlayerController::Server_RequestSetSkinDefinition_Implementation(FGameplayTag SkinTag) {
}
bool ARSTPlayerController::Server_RequestSetSkinDefinition_Validate(FGameplayTag SkinTag) {
    return true;
}

void ARSTPlayerController::Server_RequestSetPawnDefinition_Implementation(FGameplayTag PawnTag) {
}
bool ARSTPlayerController::Server_RequestSetPawnDefinition_Validate(FGameplayTag PawnTag) {
    return true;
}

void ARSTPlayerController::Server_LockInHero_Implementation() {
}

void ARSTPlayerController::Server_HasViewedIntro_Implementation() {
}

void ARSTPlayerController::Server_HandleNPCInteraction_Implementation(bool bIsInteracting, AActor* InteractingNPC) {
}

void ARSTPlayerController::Server_ChooseUpgrade_Implementation(const URSTUpgradeDefinition* UpgradeDefinition) {
}

void ARSTPlayerController::Server_ChooseThread_Implementation(const URSTMetaThreadDefinition* ThreadDefinition) {
}

void ARSTPlayerController::Server_ChoosePotion_Implementation(const URSTPotionDefinition* PotionDefinition) {
}

void ARSTPlayerController::Server_ChooseMissionByIndex_Implementation(int32 SelectedMissionIndex) {
}

void ARSTPlayerController::Server_AddInventoryItems_Implementation(const TArray<FRSTInventoryItemRequest>& InventoryItems) {
}

void ARSTPlayerController::SendInputKey(FName KeyName, TEnumAsByte<EInputEvent> inputEventType) {
}


void ARSTPlayerController::SelectHero(FGameplayTag SelectedHeroTag) {
}


void ARSTPlayerController::RerollThreadSelection() {
}

bool ARSTPlayerController::RequestSetSkinDefinition(const FGameplayTag& SkinTag) {
    return false;
}

bool ARSTPlayerController::RequestSetPawnDefinition(const FGameplayTag& PawnTag) {
    return false;
}

void ARSTPlayerController::RefreshHotbarSlotCount() {
}

void ARSTPlayerController::PawnDefinitionLoaded(FPrimaryAssetId DefinitionId) {
}




void ARSTPlayerController::OnSkinSelectionUpdated() {
}


void ARSTPlayerController::OnHideHUDChanged(const FGameplayTag InTag, int32 NewCount) {
}

void ARSTPlayerController::OnHeroUnlocksUpdated() {
}

void ARSTPlayerController::OnHeroDraftSelectedHeroes(const TArray<FGameplayTag>& SelectedHeroes) {
}

void ARSTPlayerController::OnHeroDraftDesiredHeroes(const TArray<FGameplayTag>& DesiredHeroes) {
}

void ARSTPlayerController::OnGrantedKeysChanged() {
}





void ARSTPlayerController::LockInHero() {
}

void ARSTPlayerController::LoadStreamLevel(FName LevelName) {
}

void ARSTPlayerController::KickPlayer(ARSTPlayerState* PlayerToKick) {
}



void ARSTPlayerController::GrantSkulls(int32 SkullCount) {
}

ARSTPlayerState* ARSTPlayerController::GetRSTPlayerState() const {
    return NULL;
}

URSTAbilitySystemComponent* ARSTPlayerController::GetRSTAbilitySystemComponent() const {
    return NULL;
}

bool ARSTPlayerController::GetIsAutoRunning() const {
    return false;
}

FGameplayTag ARSTPlayerController::GetCachedSkinDefinitionTag() const {
    return FGameplayTag{};
}

FGameplayTag ARSTPlayerController::GetCachedPawnDefinitionTag() const {
    return FGameplayTag{};
}

void ARSTPlayerController::DoNPCInteraction(bool bIsInteracting, AActor* InteractingNPC) {
}

void ARSTPlayerController::ClientWasBanned_Implementation(const FText& BanReason) {
}

void ARSTPlayerController::Client_RemoveThreadSelection_Implementation(bool shouldForceSelect) {
}

void ARSTPlayerController::Client_OnRerollsReplicated_Implementation() {
}

void ARSTPlayerController::Client_NotifyHubStarted_Implementation() {
}

void ARSTPlayerController::Client_NotifyHeroSelected_Implementation(const FGameplayTag& HeroTag) {
}

void ARSTPlayerController::Client_GrantTags_Implementation(FGameplayTagContainer TagContainer, bool bRecordAnalytics) {
}

void ARSTPlayerController::Client_GrantSkulls_Implementation(int32 SkullCount) {
}

void ARSTPlayerController::Client_FlushGameStats_Implementation(FRSTReplicatedStatList FlushStats) {
}

void ARSTPlayerController::Client_EndGame_Implementation(bool bDidWin, FRSTReplicatedStatList PostGameStats) {
}

void ARSTPlayerController::Client_DisplayThreadSelection_Implementation(int32 threadIndex) {
}

void ARSTPlayerController::BanPlayer(ARSTPlayerState* PlayerToBan) {
}

void ARSTPlayerController::AutoManageActiveCameraTarget(AActor* SuggestedTarget) {
}


