#include "RSTAIController.h"
#include "Navigation/CrowdFollowingComponent.h"

ARSTAIController::ARSTAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UCrowdFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->CurrentState = ERSTEnemyState::NotSet;
    this->PreviousState = ERSTEnemyState::NotSet;
    this->RunMoveEffect = NULL;
    this->SightRadius = 800.00f;
    this->MyThreatGroup = ERSTThreatGroup::Unassigned;
    this->GuardianRoamRadius = 0.00f;
    this->BlackboardEnemyStateKey = TEXT("EnemyState");
    this->BlackboardSightRadiusKey = TEXT("SightRadius");
    this->BlackboardSpawnDurationKey = TEXT("SpawnDuration");
    this->BlackboardCurrentTargetKey = TEXT("CurrentTarget");
    this->BlackboardMinAbilityRangeKey = TEXT("MinAbilityRange");
    this->BlackboardMaxAbilityRangeKey = TEXT("MaxAbilityRange");
    this->BlackboardAttackAbilityChangedKey = TEXT("AttackAbilityChanged");
    this->BlackboardWaitingOnAttackLocKey = TEXT("WaitingOnAttackLoc");
    this->BlackboardInCombatKey = TEXT("InCombat");
    this->BlackboardLastKnownTargetLocKey = TEXT("LastKnownTargetLoc");
    this->BlackboardHaveLOSKey = TEXT("HaveLOS");
    this->BlackboardDefaultMoveRadiusKey = TEXT("DefaultMoveRadius");
    this->BlackboardOrientToTargetKey = TEXT("OrientToTarget");
    this->BlackboardRiftPointKey = TEXT("RiftPoint");
    this->BlackboardCurrentPathPointKey = TEXT("CurrentPathPoint");
    this->BlackboardCurrentPathPointRadiusKey = TEXT("CurrentPathPointRadius");
    this->BlackboardIsLeashingKey = TEXT("IsLeashing");
    this->BlackboardGuardLocKey = TEXT("GuardLoc");
    this->BlackboardGuardRotKey = TEXT("GuardRot");
    this->BlackboardGuardianRoamRadiusKey = TEXT("GuardianRoamRadius");
    this->BlackboardGuardianMasterKey = TEXT("GuardianMaster");
    this->BlackboardFollowRadiusKey = TEXT("FollowRadius");
    this->BlackboardStuckTimeoutKey = TEXT("StuckTimeout");
    this->BlackboardIsStuckKey = TEXT("IsStuck");
}

void ARSTAIController::UpdatePathNodeCosts() {
}

void ARSTAIController::UpdateNodeNetwork() {
}

bool ARSTAIController::UpdateCurrentNode() {
    return false;
}

void ARSTAIController::SuspendAI(bool bResetThreatList) {
}

void ARSTAIController::StartAITimer(ERSTEnemyTimer TimerUse) {
}

void ARSTAIController::SetRunning(bool bRunning) {
}

void ARSTAIController::SetIsResting(bool bNewResting) {
}

void ARSTAIController::SetIsLeashing(bool bNewLeashing) {
}

void ARSTAIController::SetInteractingTag(bool bIsInteracting) {
}

void ARSTAIController::SetInCombat(bool NewCombat) {
}

void ARSTAIController::SetCurrentState(ERSTEnemyState NewState, AActor* InstigatorActor) {
}

FTransform ARSTAIController::SelectRandomLocation() {
    return FTransform{};
}

void ARSTAIController::ResumeAI(bool bResetPathNode) {
}

void ARSTAIController::ReachedCurrentNode() {
}

void ARSTAIController::OnSenseActors(const TArray<AActor*>& UpdatedActors) {
}

void ARSTAIController::OnRevived(AActor* OwningActor, const AActor* InInstigator) {
}

void ARSTAIController::OnObstructionsUpdated(AActor* OwningActor, bool bAdded) {
}

void ARSTAIController::OnGoBreakChanged(bool bIsGoBreakActive) {
}

void ARSTAIController::OnDowned(AActor* OwningActor, const AActor* InInstigator) {
}

void ARSTAIController::OnAIDeath() {
}

bool ARSTAIController::IsCurrentTargetInAbilityRange() {
    return false;
}

bool ARSTAIController::IsCurrentAbilityRanged() const {
    return false;
}

bool ARSTAIController::IsBlockedToNode() {
    return false;
}

bool ARSTAIController::InitAIParms() {
    return false;
}

void ARSTAIController::HandleThreatEvaluation() {
}

void ARSTAIController::HandleStuckTimer() {
}

void ARSTAIController::HandleAITimer() {
}

ERSTThreatGroup ARSTAIController::GetThreatGroup() {
    return ERSTThreatGroup::Unassigned;
}

float ARSTAIController::GetSightRadius() {
    return 0.0f;
}

FVector ARSTAIController::GetLastKnownTargetLoc() const {
    return FVector{};
}

bool ARSTAIController::GetIsRunning() const {
    return false;
}

bool ARSTAIController::GetIsResting() {
    return false;
}

bool ARSTAIController::GetIsLeashing() const {
    return false;
}

bool ARSTAIController::GetIsInteracting() {
    return false;
}

bool ARSTAIController::GetInCombat() const {
    return false;
}

bool ARSTAIController::GetHasBeenAssignedMaster() {
    return false;
}

FRotator ARSTAIController::GetGuardRot() {
    return FRotator{};
}

FVector ARSTAIController::GetGuardLoc() {
    return FVector{};
}

AActor* ARSTAIController::GetGuardianMaster() {
    return NULL;
}

float ARSTAIController::GetFollowRadius() {
    return 0.0f;
}

AActor* ARSTAIController::GetCurrentTarget() const {
    return NULL;
}

ERSTEnemyState ARSTAIController::GetCurrentState() {
    return ERSTEnemyState::NotSet;
}

FRSTRange ARSTAIController::GetCurrentAbilityRange() const {
    return FRSTRange{};
}

float ARSTAIController::GetAITimerRemaining() {
    return 0.0f;
}

float ARSTAIController::GetAITimerDuration(ERSTEnemyTimer TimerUse) {
    return 0.0f;
}

void ARSTAIController::EvaluateThreatList() {
}

bool ARSTAIController::EvaluateTargetlessAbilities() {
    return false;
}

bool ARSTAIController::DidLastTargetDie() const {
    return false;
}

void ARSTAIController::ConfigureSenses() {
}

bool ARSTAIController::CheckRoamingDistance() {
    return false;
}

bool ARSTAIController::CheckFollowDistance() {
    return false;
}

void ARSTAIController::CancelAITimer() {
}

bool ARSTAIController::ActivateSpawnAbility() {
    return false;
}

bool ARSTAIController::ActivateReviveAbility() {
    return false;
}

bool ARSTAIController::ActivateInteractResponseAbility(bool bIsBeginningInteraction, AActor* InstigatorActor) {
    return false;
}

bool ARSTAIController::ActivateCurrentAttackAbility(bool bEnforceRangeCheck) {
    return false;
}

bool ARSTAIController::ActivateAggroAbility() {
    return false;
}


