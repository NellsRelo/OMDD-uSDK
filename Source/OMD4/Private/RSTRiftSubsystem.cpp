#include "RSTRiftSubsystem.h"
#include "Templates/SubclassOf.h"

URSTRiftSubsystem::URSTRiftSubsystem() {
}

void URSTRiftSubsystem::RemoveEffectFromAll(TSubclassOf<UGameplayEffect> Effect) {
}

void URSTRiftSubsystem::RemoveAbilityFromAll(TSubclassOf<UGameplayAbility> Ability) {
}

bool URSTRiftSubsystem::GetSpawnTransformForCharacter(ARSTRift* Rift, ARSTCharacter* Character, FTransform& OutTransform) const {
    return false;
}

TArray<ARSTRift*> URSTRiftSubsystem::GetRifts() const {
    return TArray<ARSTRift*>();
}

ARSTRift* URSTRiftSubsystem::GetPrimaryRift() const {
    return NULL;
}

void URSTRiftSubsystem::ApplyEffectToAll(TSubclassOf<UGameplayEffect> Effect) {
}

void URSTRiftSubsystem::ApplyAbilityToAll(TSubclassOf<UGameplayAbility> Ability, UObject* SourceObject) {
}


