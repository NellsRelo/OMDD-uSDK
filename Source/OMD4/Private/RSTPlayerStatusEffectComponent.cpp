#include "RSTPlayerStatusEffectComponent.h"
#include "Net/UnrealNetwork.h"

URSTPlayerStatusEffectComponent::URSTPlayerStatusEffectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void URSTPlayerStatusEffectComponent::OnRep_ReplicatedStatusEffectData() {
}

void URSTPlayerStatusEffectComponent::OnGameplayEffectRemoved(const FActiveGameplayEffect& GameplayEffect) {
}

void URSTPlayerStatusEffectComponent::OnGameplayEffectApplied(UAbilitySystemComponent* Target, const FGameplayEffectSpec& SpecApplied, FActiveGameplayEffectHandle ActiveHandle) {
}

TArray<FRSTPlayerStatusEffectDataRepl> URSTPlayerStatusEffectComponent::GetStatusEffectData() const {
    return TArray<FRSTPlayerStatusEffectDataRepl>();
}

URSTPlayerStatusEffectComponent* URSTPlayerStatusEffectComponent::FindPlayerStatusEffectComponent(const AActor* Actor) {
    return NULL;
}

void URSTPlayerStatusEffectComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URSTPlayerStatusEffectComponent, ReplicatedStatusEffectData);
}


