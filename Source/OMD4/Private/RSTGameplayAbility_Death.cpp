#include "RSTGameplayAbility_Death.h"

URSTGameplayAbility_Death::URSTGameplayAbility_Death() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->AbilityTriggers.AddDefaulted(1);
    this->bProcessDeathDeferral = true;
    this->bCanBeDowned = false;
    this->DownedTime = 0.00f;
    this->DeathTime = 3.00f;
    this->FinishDeathDelay = NULL;
}

void URSTGameplayAbility_Death::StartDowned(const AActor* Instigator) {
}

void URSTGameplayAbility_Death::SetDeathTime(float NewDeathTime) {
}

void URSTGameplayAbility_Death::OnDownedDeathTimerComplete(AActor* OwningActor, const AActor* InInstigator) {
}

void URSTGameplayAbility_Death::OnDowned(AActor* OwningActor, const AActor* InInstigator) {
}

void URSTGameplayAbility_Death::OnDeathStarted(AActor* OwningActor, const AActor* InInstigator) {
}

void URSTGameplayAbility_Death::OnDeathFinished(AActor* OwningActor, const AActor* InInstigator) {
}

void URSTGameplayAbility_Death::FinishDeath() {
}



