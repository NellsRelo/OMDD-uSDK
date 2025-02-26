#include "RSTMeleeAdvanceDestination.h"
#include "Components/SceneComponent.h"

ARSTMeleeAdvanceDestination::ARSTMeleeAdvanceDestination(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->MoveSpeed = 0.00f;
    this->MaxDistance = 0.00f;
}

void ARSTMeleeAdvanceDestination::SetTarget(AActor* InTarget, float InTargetDistance) {
}

void ARSTMeleeAdvanceDestination::SetMoveSpeed(float InMoveSpeed) {
}

void ARSTMeleeAdvanceDestination::SetMaxDistance(float InMaxDistance) {
}

void ARSTMeleeAdvanceDestination::SetGroundDistanceEnabled(bool bEnabled, float HalfHeight) {
}


