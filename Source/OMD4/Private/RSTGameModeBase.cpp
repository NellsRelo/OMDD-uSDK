#include "RSTGameModeBase.h"
#include "RSTCharacter.h"
#include "RSTGameSession.h"
#include "RSTModifierComponent.h"
#include "RSTPlayerController.h"
#include "RSTPlayerState.h"
#include "RSTSpectatorPawn.h"

ARSTGameModeBase::ARSTGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameSessionClass = ARSTGameSession::StaticClass();
    this->PlayerControllerClass = ARSTPlayerController::StaticClass();
    this->PlayerStateClass = ARSTPlayerState::StaticClass();
    this->DefaultPawnClass = ARSTCharacter::StaticClass();
    this->SpectatorClass = ARSTSpectatorPawn::StaticClass();
    this->bUseSeamlessTravel = true;
    this->GoBreakCoinBonus = 0;
    this->bShouldAdvertise = false;
    this->bAllowJoinInProgress = false;
    this->ModifierComponent = CreateDefaultSubobject<URSTModifierComponent>(TEXT("ModifierComponent"));
    this->HubMapName = TEXT("HubMap");
    this->bProcessAddModifiers = true;
    this->InactivePlayerStateLifeSpan = 300.00f;
    this->MaxInactivePlayers = 4;
    this->NumPlayers = 0;
    this->NumTravellingPlayers = 0;
    this->bHealOnGoBreak = true;
    this->GoBreakRevivePercentage = 1.00f;
    this->CriticalHitDamageScale = 2.00f;
    this->LeashTimeout = 10.00f;
    this->IgnoreTargetTimeout = 10.00f;
    this->AdditionalChestCount = 0;
    this->OverrideChestChanceOfNone = -1.00f;
    this->OverrideCorruptedTrapGridChanceOfNone = -1.00f;
    this->bAllowCorruptedTrapGridFirstMission = false;
    this->bPreventUnstableRiftDistortion = false;
    this->bRandomizeHotbar = false;
}

bool ARSTGameModeBase::ShouldProcessModifiers() const {
    return false;
}

void ARSTGameModeBase::ReturnToHubPostGame() {
}

void ARSTGameModeBase::ReturnToHub() {
}

void ARSTGameModeBase::OnPRSComplete(FGameplayTag PRSTag) {
}

void ARSTGameModeBase::OnPlayerDowned(ARSTCharacter* Character) {
}

void ARSTGameModeBase::OnPlayerDeath(ARSTCharacter* Character) {
}

void ARSTGameModeBase::OnGamePhasePostGame() {
}

void ARSTGameModeBase::GrantCoinToPlayers(int32 AmountToShare, ERSTCoinGrantReason GrantReason) {
}

float ARSTGameModeBase::GetLeashTimeout() const {
    return 0.0f;
}

float ARSTGameModeBase::GetIgnoreTargetTimeout() const {
    return 0.0f;
}

void ARSTGameModeBase::FinishGoBreakTransition(const FGameplayTag& TransitionTag, bool bCancelled, const FGameplayTagContainer& AdditionalTags, FGameplayTag BreakTag) {
}

void ARSTGameModeBase::CommitGamble() {
}



void ARSTGameModeBase::BP_AddWinGameScore_Implementation() {
}

void ARSTGameModeBase::BP_AddDefaultGameScore_Implementation() {
}


