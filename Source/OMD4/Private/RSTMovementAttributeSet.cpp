#include "RSTMovementAttributeSet.h"
#include "Net/UnrealNetwork.h"

URSTMovementAttributeSet::URSTMovementAttributeSet() {
}

void URSTMovementAttributeSet::OnRep_TimeDilation(const FGameplayAttributeData& OldValue) {
}

void URSTMovementAttributeSet::OnRep_MovementSpeed(const FGameplayAttributeData& OldValue) {
}

void URSTMovementAttributeSet::OnRep_GravityScale(const FGameplayAttributeData& OldValue) {
}

void URSTMovementAttributeSet::OnRep_FallingLateralFriction(const FGameplayAttributeData& OldValue) {
}

void URSTMovementAttributeSet::OnRep_AirControl(const FGameplayAttributeData& OldValue) {
}

void URSTMovementAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URSTMovementAttributeSet, MovementSpeed);
    DOREPLIFETIME(URSTMovementAttributeSet, GravityScale);
    DOREPLIFETIME(URSTMovementAttributeSet, FallingLateralFriction);
    DOREPLIFETIME(URSTMovementAttributeSet, AirControl);
    DOREPLIFETIME(URSTMovementAttributeSet, TimeDilation);
}


