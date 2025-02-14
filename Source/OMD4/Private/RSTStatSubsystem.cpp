#include "RSTStatSubsystem.h"

URSTStatSubsystem::URSTStatSubsystem() {
}

void URSTStatSubsystem::SetStatIntAll(FGameplayTag GameplayTag, const TArray<FGameplayTag>& AdditionalIdentifiers, int32 StatValue) {
}

void URSTStatSubsystem::SetStatInt(FGameplayTag GameplayTag, int32 PlayerIndex, const TArray<FGameplayTag>& AdditionalIdentifiers, int32 StatValue) {
}

void URSTStatSubsystem::SetStatFloatAll(FGameplayTag GameplayTag, const TArray<FGameplayTag>& AdditionalIdentifiers, float StatValue) {
}

void URSTStatSubsystem::SetStatFloat(FGameplayTag GameplayTag, int32 PlayerIndex, const TArray<FGameplayTag>& AdditionalIdentifiers, float StatValue) {
}

void URSTStatSubsystem::MaxStatIntAll(FGameplayTag GameplayTag, const TArray<FGameplayTag>& AdditionalIdentifiers, int32 StatValue) {
}

void URSTStatSubsystem::MaxStatInt(FGameplayTag GameplayTag, int32 PlayerIndex, const TArray<FGameplayTag>& AdditionalIdentifiers, int32 StatValue) {
}

void URSTStatSubsystem::MaxStatFloatAll(FGameplayTag GameplayTag, const TArray<FGameplayTag>& AdditionalIdentifiers, float StatValue) {
}

void URSTStatSubsystem::MaxStatFloat(FGameplayTag GameplayTag, int32 PlayerIndex, const TArray<FGameplayTag>& AdditionalIdentifiers, float StatValue) {
}

void URSTStatSubsystem::IncrementStatIntAll(FGameplayTag GameplayTag, const TArray<FGameplayTag>& AdditionalIdentifiers, int32 StatValue) {
}

void URSTStatSubsystem::IncrementStatInt(FGameplayTag GameplayTag, int32 PlayerIndex, const TArray<FGameplayTag>& AdditionalIdentifiers, int32 StatValue) {
}

void URSTStatSubsystem::IncrementStatFloatAll(FGameplayTag GameplayTag, const TArray<FGameplayTag>& AdditionalIdentifiers, float StatValue) {
}

void URSTStatSubsystem::IncrementStatFloat(FGameplayTag GameplayTag, int32 PlayerIndex, const TArray<FGameplayTag>& AdditionalIdentifiers, float StatValue) {
}

int32 URSTStatSubsystem::GetStatInt(FGameplayTag GameplayTag, int32 PlayerIndex, FGameplayTag AdditionalIdentifier) const {
    return 0;
}

float URSTStatSubsystem::GetStatFloat(FGameplayTag GameplayTag, int32 PlayerIndex, FGameplayTag AdditionalIdentifier) const {
    return 0.0f;
}

int32 URSTStatSubsystem::GetNumSubstats(FGameplayTag GameplayTag, int32 PlayerIndex, FGameplayTagContainer RootFilters) const {
    return 0;
}


