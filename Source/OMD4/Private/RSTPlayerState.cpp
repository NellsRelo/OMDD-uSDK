#include "RSTPlayerState.h"
#include "Net/UnrealNetwork.h"
#include "RSTAbilitySystemComponent.h"
#include "RSTDamageModifierComponent.h"
#include "RSTHotbarComponent.h"
#include "RSTInventoryManagerComponent.h"
#include "RSTPlayerModifierComponent.h"
#include "RSTPlayerStateMiscModsComponent.h"
#include "RSTPlayerStatePRSComponent.h"
#include "RSTPlayerStatusEffectComponent.h"

ARSTPlayerState::ARSTPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsHost = false;
    this->bIsDisconnected = false;
    this->PlayerIndex = -1;
    this->AbilitySystemComponent = CreateDefaultSubobject<URSTAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    this->PawnDefinition = NULL;
    this->SkinDefinition = NULL;
    this->InventoryManagerComponent = CreateDefaultSubobject<URSTInventoryManagerComponent>(TEXT("InventoryManagerComponent"));
    this->HotbarComponent = CreateDefaultSubobject<URSTHotbarComponent>(TEXT("HotbarComponent"));
    this->ExtraHotbarSlotCount = 0;
    this->StatusEffectComponent = CreateDefaultSubobject<URSTPlayerStatusEffectComponent>(TEXT("PlayerStatusEffects"));
    this->bHasPostInitializedComponents = false;
    this->PlayerStatePRSComponent = CreateDefaultSubobject<URSTPlayerStatePRSComponent>(TEXT("PlayerStatePRSComponent"));
    this->Coin = 0;
    this->GoBreakCoinBonus = 0;
    this->bAwardComboAlways = false;
    this->EnvironmentKillComboPointChance = 0.00f;
    this->SelectedPotion = NULL;
    this->ModifierComponent = CreateDefaultSubobject<URSTPlayerModifierComponent>(TEXT("ModifierComponent"));
    this->MiscModsComponent = CreateDefaultSubobject<URSTPlayerStateMiscModsComponent>(TEXT("PlayerStateMiscModsComponent"));
    this->LoadoutThreadCount = 2;
    this->GeneralThreadCount = 1;
    this->bUseSeamlessTravelPlayerStart = false;
    this->bCarryOverCoin = false;
    this->CoinCarryOverPercentage = 0.50f;
    this->CoinCarryOverMax = 2000;
    this->bVoiceEnabled = false;
    this->PlayerReadyGameplayEffectClass = NULL;
    this->bAllowUltimateChargeWhileActive = false;
    this->DamageModifierComponent = CreateDefaultSubobject<URSTDamageModifierComponent>(TEXT("DamageModifierComponent"));
    this->RerollsUsed = 0;
    this->ThreadsSkippedCount = 0;
}

bool ARSTPlayerState::SpendCoin(int32 amount) {
    return false;
}

void ARSTPlayerState::ShowProfileUI(APlayerController* RequestingPlayer) {
}

void ARSTPlayerState::SetThreadsSkippedCount(int32 InThreadsSkippedCount) {
}

void ARSTPlayerState::Server_SpendCoin_Implementation(int32 amount) {
}

void ARSTPlayerState::Server_SetVoiceEnabled_Implementation(bool bInVoiceEnabled) {
}

void ARSTPlayerState::Server_SetThreadsSkippedCount_Implementation(int32 InThreadsSkippedCount) {
}

void ARSTPlayerState::Server_SetRerollsUsed_Implementation(int32 InRerollsUsed) {
}

void ARSTPlayerState::Server_RemovePing_Implementation(int32 PingTrackerId) {
}

void ARSTPlayerState::Server_AddPing_Implementation(URSTCommunicationDefinition* CommunicationOption, AActor* AttachedActor, const FVector& PingPosition, int32 PingTrackerId, ARSTPlayerState* ResponseInstigator, int32 ResponsePingId) {
}

void ARSTPlayerState::RemoveAbilityUIDataUpdatedCallback(FGameplayTag Tag, const ARSTPlayerState::FRSTAbilityUIDataDelegate& Delegate) {
}

void ARSTPlayerState::ProcessComboPoints(int32 ComboPoints) {
}

void ARSTPlayerState::OnVoiceChatSettingsUpdated(FGameplayTag TagIdentifier, const FRSTVoiceChatGenericMessageData& Payload) {
}

void ARSTPlayerState::OnRep_VoiceEnabled() {
}

void ARSTPlayerState::OnRep_SkinDefinition() {
}

void ARSTPlayerState::OnRep_SelectedUpgrades() {
}

void ARSTPlayerState::OnRep_SelectedThreads() {
}

void ARSTPlayerState::OnRep_SelectedPotion() {
}

void ARSTPlayerState::OnRep_RerollsUsed() {
}

void ARSTPlayerState::OnRep_RawUniqueNetIdStr() {
}

void ARSTPlayerState::OnRep_PlayerIndex() {
}

void ARSTPlayerState::OnRep_PawnDefinition() {
}

void ARSTPlayerState::OnRep_IsDisconnected() {
}

void ARSTPlayerState::OnRep_Coin(int32 PreviousCoin) {
}

void ARSTPlayerState::OnPlayerReadyStateInterruptOrComplete(FGameplayTag PRSTag) {
}

void ARSTPlayerState::OnPlayerReadyStateChanged(FGameplayTag PRSTag, FUniqueNetIdRepl PlayerNetID, bool bIsReady) {
}

void ARSTPlayerState::OnAbilityUITagChanged(const FGameplayTag InTag, int32 NewCount, FGameplayTag AbilityTag) {
}

void ARSTPlayerState::OnAbilityCommit(UGameplayAbility* Ability) {
}

void ARSTPlayerState::NotifyOwnedTrapSold() {
}

void ARSTPlayerState::NetMulticast_RemovePing_Implementation(int32 PingTrackerId) {
}

void ARSTPlayerState::NetMulticast_AddPing_Implementation(URSTCommunicationDefinition* CommunicationOption, AActor* AttachedActor, const FVector& PingPosition, int32 PingTrackerId, ARSTPlayerState* ResponseInstigator, int32 ResponsePingId) {
}



bool ARSTPlayerState::IsVoiceEnabled() const {
    return false;
}

bool ARSTPlayerState::IsHost() const {
    return false;
}

bool ARSTPlayerState::IsDisconnected() const {
    return false;
}

int32 ARSTPlayerState::GrantCoin(int32 amount, ERSTCoinGrantReason GrantReason) {
    return 0;
}

FGameplayTagContainer ARSTPlayerState::GetUnlockedHeroes() const {
    return FGameplayTagContainer{};
}

int32 ARSTPlayerState::GetThreadsSkippedCount() {
    return 0;
}

FGameplayTag ARSTPlayerState::GetTagIdentifier() const {
    return FGameplayTag{};
}

int32 ARSTPlayerState::GetStatValue(FGameplayTag InStatTag, FGameplayTag InSubStatTag, bool bRunStats) const {
    return 0;
}

void ARSTPlayerState::GetSelectedSkins(TMap<FGameplayTag, FGameplayTag>& OutSkins) const {
}

FGameplayTag ARSTPlayerState::GetSelectedSkin(const FGameplayTag& HeroTag) const {
    return FGameplayTag{};
}

URSTAbilitySystemComponent* ARSTPlayerState::GetRSTAbilitySystemComponent() const {
    return NULL;
}

int32 ARSTPlayerState::GetRerollsUsed() {
    return 0;
}

bool ARSTPlayerState::GetPlayerTrapPlacementLimit(FGameplayTag PlacementLimitGroup, int32& OutPlacementLimit) const {
    return false;
}

URSTPlayerStatusEffectComponent* ARSTPlayerState::GetPlayerStatusEffectComponent() const {
    return NULL;
}

int32 ARSTPlayerState::GetPlayerIndex() const {
    return 0;
}

int32 ARSTPlayerState::GetLoadoutThreadCount() const {
    return 0;
}

int32 ARSTPlayerState::GetGeneralThreadCount() const {
    return 0;
}

FString ARSTPlayerState::GetCrossplayPlatform() const {
    return TEXT("");
}

TSoftObjectPtr<URSTAbilityUIData> ARSTPlayerState::GetAbilityUIData(FGameplayTag Tag) {
    return NULL;
}

void ARSTPlayerState::Client_SpendCoin_Implementation(int32 amount) {
}

void ARSTPlayerState::Client_NotifyOwnedTrapSold_Implementation() {
}

void ARSTPlayerState::Client_NotifyOwnedTrapPlaced_Implementation() {
}

void ARSTPlayerState::Client_NotifyOwnedTrapDestroyed_Implementation() {
}

void ARSTPlayerState::Client_AddCoin_Implementation(int32 amount, ERSTCoinGrantReason GrantReason) {
}

bool ARSTPlayerState::CanShowProfileUI(APlayerController* RequestingPlayer) {
    return false;
}

bool ARSTPlayerState::CanAddUltimateCharge() const {
    return false;
}

void ARSTPlayerState::CallAndRegister_OnAbilityUIDataUpdated(FGameplayTag Tag, const ARSTPlayerState::FRSTAbilityUIDataDelegate& Delegate) {
}

void ARSTPlayerState::AddUltimateChargePercentage(float AmountPercentage) {
}

void ARSTPlayerState::AddUltimateCharge(float amount) {
}

void ARSTPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARSTPlayerState, bIsHost);
    DOREPLIFETIME(ARSTPlayerState, bIsDisconnected);
    DOREPLIFETIME(ARSTPlayerState, PlayerIndex);
    DOREPLIFETIME(ARSTPlayerState, PlatformOSS);
    DOREPLIFETIME(ARSTPlayerState, CrossplayPlatform);
    DOREPLIFETIME(ARSTPlayerState, RawUniqueNetIdStr);
    DOREPLIFETIME(ARSTPlayerState, PawnDefinition);
    DOREPLIFETIME(ARSTPlayerState, SkinDefinition);
    DOREPLIFETIME(ARSTPlayerState, Coin);
    DOREPLIFETIME(ARSTPlayerState, SelectedThreads);
    DOREPLIFETIME(ARSTPlayerState, SelectedUpgrades);
    DOREPLIFETIME(ARSTPlayerState, SelectedPotion);
    DOREPLIFETIME(ARSTPlayerState, MissionStats);
    DOREPLIFETIME(ARSTPlayerState, RunStats);
    DOREPLIFETIME(ARSTPlayerState, bVoiceEnabled);
    DOREPLIFETIME(ARSTPlayerState, UnlockedHeroes);
    DOREPLIFETIME(ARSTPlayerState, SelectedSkins);
    DOREPLIFETIME(ARSTPlayerState, RerollsUsed);
    DOREPLIFETIME(ARSTPlayerState, ThreadsSkippedCount);
}


