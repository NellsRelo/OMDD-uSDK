#include "RSTAttackLocationsComponent.h"

URSTAttackLocationsComponent::URSTAttackLocationsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseEditorCompositing = true;
    this->AttackLocConfiguration = ERSTAttackLocConfiguration::BoxExtents;
    this->AttackLocCount = 1;
    this->AttackLocSpacing = 210.00f;
    this->bUseDoorOrientation = false;
}

void URSTAttackLocationsComponent::SetUseDoorOrientation(bool bNewOrientationSetting) {
}

void URSTAttackLocationsComponent::SetPerimeterBoxExtent(FVector InPerimeterBoxExtent) {
}

void URSTAttackLocationsComponent::SetAttackLocSpacing(float InSpacing) {
}

void URSTAttackLocationsComponent::SetAttackLocCount(int32 InCount) {
}

void URSTAttackLocationsComponent::SetAttackLocConfiguration(ERSTAttackLocConfiguration InConfig) {
}

bool URSTAttackLocationsComponent::RequestAttackTransform(FVector AttackerLoc, AActor* Attacker, float RangeToCheck, FTransform& OutTransform, bool bMustPath, bool bReserveSlot, bool bForceRecalc) {
    return false;
}

bool URSTAttackLocationsComponent::HasPendingAttackLoc() {
    return false;
}

ERSTAttackLocConfiguration URSTAttackLocationsComponent::GetAttackLocConfiguration() {
    return ERSTAttackLocConfiguration::BoxExtents;
}

URSTAttackLocationsComponent* URSTAttackLocationsComponent::FindAttackLocationsComponent(const AActor* Actor) {
    return NULL;
}


