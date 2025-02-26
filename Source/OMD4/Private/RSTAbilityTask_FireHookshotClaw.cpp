#include "RSTAbilityTask_FireHookshotClaw.h"
#include "Net/UnrealNetwork.h"

URSTAbilityTask_FireHookshotClaw::URSTAbilityTask_FireHookshotClaw() {
    this->HookshotSpeed = 0.00f;
    this->HoldDuration = 0.00f;
    this->GrappleID = 0;
    this->State = ERSTFireHookshotClawState::None;
    this->MaxWeightClass = ERSTCharacterWeightClass::Light;
}

URSTAbilityTask_FireHookshotClaw* URSTAbilityTask_FireHookshotClaw::FireHookshotClaw(UGameplayAbility* OwningAbility, const FVector& NewStartLocation, const FVector& NewTargetLocation, float NewHookshotSpeed, float NewHoldDuration, ERSTCharacterWeightClass NewMaxWeightClass) {
    return NULL;
}

void URSTAbilityTask_FireHookshotClaw::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URSTAbilityTask_FireHookshotClaw, GrappledCharacter);
    DOREPLIFETIME(URSTAbilityTask_FireHookshotClaw, StartLocation);
    DOREPLIFETIME(URSTAbilityTask_FireHookshotClaw, TargetLocation);
    DOREPLIFETIME(URSTAbilityTask_FireHookshotClaw, HookshotSpeed);
    DOREPLIFETIME(URSTAbilityTask_FireHookshotClaw, HoldDuration);
    DOREPLIFETIME(URSTAbilityTask_FireHookshotClaw, GrappleID);
    DOREPLIFETIME(URSTAbilityTask_FireHookshotClaw, State);
    DOREPLIFETIME(URSTAbilityTask_FireHookshotClaw, MaxWeightClass);
}


