#include "RSTHealthComponent.h"
#include "Net/UnrealNetwork.h"

URSTHealthComponent::URSTHealthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AbilitySystemComponent = NULL;
    this->HealthSet = NULL;
    this->DeathState = ERSTDeathState::NotDead;
    this->LastDeathEvent = NULL;
}

void URSTHealthComponent::UninitializeFromAbilitySystem() {
}

void URSTHealthComponent::ReviveFromDowned(float ReviverMultiplier, const AActor* Instigator) {
}

void URSTHealthComponent::ProcessDownedDeathTimeComplete() {
}

void URSTHealthComponent::OnRep_ReviveData() {
}

void URSTHealthComponent::OnRep_LastDeathEvent() {
}

bool URSTHealthComponent::IsReviveInProgress() const {
    return false;
}

bool URSTHealthComponent::IsDowned() const {
    return false;
}

bool URSTHealthComponent::IsDeadOrDying() const {
    return false;
}

bool URSTHealthComponent::IsDamageFatal(float Damage) const {
    return false;
}

void URSTHealthComponent::InitializeWithAbilitySystem(URSTAbilitySystemComponent* InASC) {
}

float URSTHealthComponent::GetShieldNormalized() const {
    return 0.0f;
}

float URSTHealthComponent::GetShield() const {
    return 0.0f;
}

float URSTHealthComponent::GetRevivingAllyStrength() const {
    return 0.0f;
}

float URSTHealthComponent::GetMaxShield() const {
    return 0.0f;
}

float URSTHealthComponent::GetMaxHealth() const {
    return 0.0f;
}

URSTDeathEvent* URSTHealthComponent::GetLastDeathEvent() const {
    return NULL;
}

bool URSTHealthComponent::GetIsDisplaying() {
    return false;
}

float URSTHealthComponent::GetHealthNormalized() const {
    return 0.0f;
}

float URSTHealthComponent::GetHealth() const {
    return 0.0f;
}

float URSTHealthComponent::GetDownedRemaining() const {
    return 0.0f;
}

float URSTHealthComponent::GetDownedDuration() const {
    return 0.0f;
}

float URSTHealthComponent::GetDisplayDuration() {
    return 0.0f;
}

ERSTDeathState URSTHealthComponent::GetDeathState() const {
    return ERSTDeathState::NotDead;
}

URSTHealthComponent* URSTHealthComponent::FindHealthComponent(const AActor* Actor) {
    return NULL;
}

void URSTHealthComponent::EnableDisplay(float Duration) {
}

void URSTHealthComponent::DisableDisplay() {
}

void URSTHealthComponent::DamageSelfDestruct(bool bFellOutOfWorld, AActor* Instigator) {
}

bool URSTHealthComponent::CanEnableDisplay(float Duration) {
    return false;
}

void URSTHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URSTHealthComponent, LastDeathEvent);
    DOREPLIFETIME(URSTHealthComponent, ReviveData);
    DOREPLIFETIME(URSTHealthComponent, DownedData);
}


